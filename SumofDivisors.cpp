#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5;
int sumOfdiv[mx];

int main(){

    for(int i=1;i<=mx;i++){
        for(int j=i;j<=mx;j+=i){
            sumOfdiv[j] += i;
        }
    }
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cout<<"sum of divisors of : "<<i<<endl;
        cout<<sumOfdiv[i]<<endl;
    }

}