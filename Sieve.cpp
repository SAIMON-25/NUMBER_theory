
//### Brute force
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    bool ans = true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ans = false;
        }
    }
    return ans;
}


// int main(){

//     int n;
//     cin >> n;

//     for(int i=2;i<=n;i++){   ///Complexity O(n*sqrt(n));
//             if(isPrime(i)){
//                 cout<<i<<" ";
//             }
//     }
//     cout<<endl;
// }

///---->> Optimised solutions...-->>
// int main(){

//     int n;
//     cin >> n;
//     vector<bool>v(n,true);
    
//     v[0]=v[1]=false;

//     for(int i=2;i*i<=n;i++){
//         if(v[i]==true){
//         for(int j=i+i; j<=n; j+=i){///O(n log log n)
//             v[j] = false;
//         }
//         }
//     }
//     for(int i = 2;i<=n;i++){
//         if(v[i]){
//             cout<<i<<" ";
//         }
//     }

// }

//----------------MOre-----------------Sieveing by odd only-----
int main(){

    int n;
    cin >> n;
    vector<int>v(n,true);
    v[0]=v[1]=false;
    v[2] = true;
    ///Since , all even (except 2) can not be prime ,that's why we marked it ""false""
    for(int i=4;i<=n;i+=2){
        v[i]=false;
    }
    int sq = sqrt(n);///we can use sqrt() instead of n
    for(int i=3;i*i<=sq;i+=2){
        if(v[i]){//prime er multiple
            for(int j=i+i;j<=n;j+=i){
                v[j] = false;
            }
        }
    }

    for(int i = 2;i<=n;i++){
        if(v[i]){
            cout<<i<<" ";
        }
    }

}