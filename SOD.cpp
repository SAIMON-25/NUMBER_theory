#include <bits/stdc++.h>
using namespace std;


const int mx = 1e8+123;
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

long long   SOD(long long int n){ \\(2^0+2^1+2^2).(3^0+3^1+3^2).(5^0+5^1+5^2)
    
    long long sod = 1;
    
    for(auto p:Primes){
        if(p*p*1LL>n)
            break;
        if(n%p == 0){
            int sum = 1;
            int a = 1;
            while(n%p == 0){
                a *= p;
                sum +=a;
                n/=p;
            }
            sod = sod*sum;
        }
    }
    if(n>1)
        sod = sod*(n+1);
    
    return sod;
}



int main()
{
    int lim = 1e8;
    sieve(lim);

    long long int n;
    cin >> n;
    cout<<SOD(n)<<endl;
 
    return 0;
}