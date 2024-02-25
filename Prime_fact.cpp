#include<bits/stdc++.h>
using namespace std;

//Blog -> CP Algo--> use as templete

///---->>Brute Force approach<<<----\\ almost O(sqrt(n));;;

// int main(){
//     int n;
//     cin >> n;

//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             int cnt = 0;
//             while(n%i==0){
//                 cnt++;
//                 n/=i;
//             }
//             cout<<i<<"^"<<cnt<<" ";
//         }
//     }
//     if(n>1){
//         cout<<n<<"^"<<1<<endl;
//     }
// }



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

vector<int> PrimeGen(int n){
    vector<int>factors;
    for(auto p:Primes){
        if(p*p*1LL>n)
            break;
        if(n%p == 0){
            while(n%p == 0){
                factors.push_back(p);
                n/=p;
            }
        }
    }
    if(n>1)
        factors.push_back(n);
    
    return factors;
}

#include<bits/stdc++.h>
using namespace std;

int main(){

    int lim = 1e7;
    sieve(lim);

    int n;
    cin >> n;
    vector<int>fact = PrimeGen(n);
    
    for(auto x:fact)
    cout<<x<<" ";

}