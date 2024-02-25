#include <bits/stdc++.h>
using namespace std;

// less than O(sqrt(n))...
const int mx = 1e8;
bitset<mx> isPrime; /// similar to bool isPrime[mx];all bit are 000000000000
vector<int> Primes;

// complexity nearly O(n);
void sieve(int n)
{
    for (int i = 3; i <= n; i += 2)
    { /// All odd marked as prime;
        isPrime[i] = 1;
    }
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0; /// All multiples of a number markd as 0;
            }
        }
    }
    Primes.push_back(2); /// first push the 2 which was ignored;
    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i])
            Primes.push_back(i);
    }
}

int NOD(int n)
{
    int nod = 1;
    for (auto p : Primes)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            int cnt = 0;
            while (n % p == 0)
            {
                cnt++;
                n /= p;
            }
            cnt++;
            nod *= cnt;
        }
    }
    if (n > 1)
        nod *= 2;
    return nod;
}

int main()
{
    sieve(1e7);
    int n;
    cin >> n;
    cout << NOD(n) -1 << endl;
    return 0;
}