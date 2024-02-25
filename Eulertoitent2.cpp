#include<bits/stdc++.h>
using namespace std;

/*print all the phi(n) form 1 to n */

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

const int lim = 5e6;
unsigned long phi[lim];

int main()
{
    sieve(5e6);
    for(int i=1;i<=lim;i++){
        phi[i] = i;     // all number is initialize by itself becauseof  phi(n) = n * (p-1)/p
    }


    /*using harmony series calculated all phi from 1 to n*/
    for(auto p:Primes){
        for(long long j = p ;j<=lim;j+=p){
            phi[j] = phi[j]/p;
            phi[j] = phi[j]*(p-1);
        }
    }
    for(int i=1;i<=20;i++)
        cout<<i<<" : "<<phi[i]<<endl;

    return 0;
}