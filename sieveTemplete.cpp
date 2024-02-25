#include<bits/stdc++.h>
using namespace std;
/*
A bitset is an array of bools but each boolean value is not stored in a separate byte instead,
bitset optimizes the space such that each boolean value takes 1-bit space only, 
so space taken by bitset is less than that of an array of bool or vector of bool.
*/
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

int main(){

    int n;
    cin >> n;
    sieve(n);
    for(auto x:Primes)
        cout<<x<<" ";
    cout<<endl;
}