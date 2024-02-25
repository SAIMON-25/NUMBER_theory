#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;                          ///Complexity --> O(sqrt(n))
//     cin >> n;
//     vector<int>div;

//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             div.push_back(i);

//             if(n/i!=i)
//                 div.push_back(n/i);
//         }
//     }
//     sort(div.begin(),div.end());

//     for(auto s:div)
//         cout<<s<<" ";
// }

////-----------------Set-----------
// int main(){
//     int n;
//     cin >> n;

//     set<int>div;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             div.insert(i);
//             div.insert(n/i);
//         }
//     }
//     for(auto &s:div){
//         cout<<s<<"  ";
//     }
// }

///-----------------------------------------------------------
///print all the divisors of 1 to N;Here N = 100-->Complexity O(n*sqrt(n))

// vector<vector<int>>divisors(110);

// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j*j<=i;j++){
//             if(i%j==0){
//                 divisors[i].push_back(j);
//                 if(i/j!=j){
//                     divisors[i].push_back(i/j);
//                 }
//             }
//         }                                                                       
//         sort(divisors[i].begin(),divisors[i].end());
//     }
    
//     for(int i=1;i<=n;i++){
//         cout<<i<<" : ";
//         for(auto s:divisors[i])
//             cout<<s<<" ";
//         cout<<endl;
//     }
// }

///------------------------------------Optimised Solutions-------------------
///Complexity --> O(n*log(n))
const int N = 1e7+10;
vector< vector<int> >Div(N);

int main(){
    int n;
    cin >> n;
    long long int ans = 0;
    int cnt;
    for(int i=1;i<=n;i++){
        for(int j = i;j<=n;j+=i){
            Div[j].push_back(i);
        }
    }

    for(int i=1;i<=n;i++){
        cout<<i<<" : ";
        for(auto x:Div[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}