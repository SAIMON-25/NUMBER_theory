#include <bits/stdc++.h>
using namespace std;


const int mx = 1e8;
bitset<mx>isPrime;///similar to bool isPrime[mx];all bit are 000000000000
vector<int>Primes;

//complexity nearly O(n);
void sieve(int n){
    for(int i = 3;i<=n;i+=2){/// All odd marked as prime;
        isPrime[i] = 1;
    }
    int sq = sqrt(n);
    for(int i = 3;i<=sq;i+=2){
        if(isPrime[i]){
            for(int j = i*i;j<=n ;j+=i){
            isPrime[j] = 0;///All multiples of a number markd as 0;
        }
    }
    }
    Primes.push_back(2);///first push the 2 which was ignored;
    for(int i=3;i<=n;i+=2){
        if(isPrime[i])
            Primes.push_back(i);
    }
}

long long PHI(int n){
    long long phi = n;
    for(auto p:Primes){
        if(p*p*1LL > n)
            break;
        if(n%p == 0){
            while(n%p == 0){
                n/=p;
            }
            phi *=(p-1);  /// phi = (p-1)/p ke doi line a likce...
            phi/=p;
        }
    }
    if(n>1){
        phi*=(n-1);
        phi/=n;
    }
    return phi;
}
int main()
{
    sieve(1e6);

        int n;
        cin >> n;
        cout<<PHI(n)<<endl;

    return 0;
}