#include<bits/stdc++.h>
using namespace std;

// complexity - > O(sqrt(n))
//  general 
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n)
                cnt++;
            else
                cnt+=2;
        }
    }
    cout<<cnt<<endl;
    return 0;
}