#include<bits/stdc++.h>
using namespace std;


///--------------Naive Approach---------------
// int main(){

//     int a,b;
//     cin >> a >> b;
//     int gcd;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             gcd = i;
//         }
//     }
//     cout<<gcd<<endl;
// }

///-----------------Euclid approach---------------------

int gcd(int a,int b){
    if(b==0)
        return a;
    else{
        gcd(b,a%b);
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    cout<<gcd(a,b)<<endl;
}