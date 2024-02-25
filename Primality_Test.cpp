// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int n){
//     if( n == 1)
//         return false;
//     for(int i=2;i<n;i++){
//         if(n%i == 0)
//            return false;
//     }
//     return true;
// }

// int main(){   ////Complexity -> O(n) .We can reduce this O(sqrt(n))
//     int n;
//     cin >> n;

//     cout<<isPrime(n)<<endl;

// }


//=============================================================================

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1)
        return false;

    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;

    }
    return true;
}

int main(){
    int n;
    cin >> n;

    if(isPrime(n))
        cout<<n <<" Is prime"<<endl;
    else
        cout<<"Not prime"<<endl;

}