#include<bits/stdc++.h>
using namespace std;

//------------------Number of Divisors----------------O(sqrt(n))
// int main(){
//     int n;
//     cin >> n;
//     int cnt = 0;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             if(i*i == n){
//                 cnt++;
//             }
//             else
//                 cnt+=2;
//         }
//     } 
//     cout<<cnt<<endl;
// }

//--------------------Print the Number of divisors from (1 to N)(optimised solutions per Calculations)---------------


const int mx = 1e7+123;
int cnt[mx];
int main(){

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j = i;j<=n;j+=i){/// Harmonic series Generation 
            cnt[j]++;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" : "<<cnt[i]<<endl;
    }
}


/// Jar divisor number 2 ta seta prime number hbe...
// int main(){

//     for(int i=1; i<=mx;i++){
//         for(int j = i; j<=mx ;j+=i){
//             cnt[j]++;
//         }
//     }
//     int n;
//     cin >> n;
//     for(int i = 1;i<=n;i++ ){
//         if(cnt[i] == 2){
//             cout<< i <<" is prime"<<endl;
//         }
//     }


// }