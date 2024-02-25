#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int b,n;
//     cin >> b >> n;
//     int ans = 1;
//     for(int i=1;i<=n;i++){///Naive Approach...//complexity -->O(n)
//         ans = ans*b;
//     }
//     cout<<ans<<endl;
// }

///------------------------------------------------
///Better Approach

// int main(){
//     long long  a,n;
//     cin >> a >> n;
//     long long ans = 1;
//     while(n>0){
//         if(n&1){                //Complexity-->O(log (n))
//             ans*=a;
//         }
//         a= a*a;
//         n/=2;
//     }
//     cout<<ans<<endl;

// }

///-----------------------------------Another--------------------

// int main(){
//     long long int a,p;
//     cin >> a >> p;
//     long long int ans = 1;
//     while(p>0){
//         if(p&1){
//             ans = ans *a;
//             p--;
//         }
//         else{
//             a = a*a;
//             p = p/2;
//         }
//     }
//     cout<<ans<<endl;
// }

///------------------------Using bits-------------------

int main(){
    
}