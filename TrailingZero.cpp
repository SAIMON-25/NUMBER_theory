#include<bits/stdc++.h>
using namespace std;
#define saimon()                 \
    ;                            \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl '\n'


/*  Trailing Zeros in factorial of n  */
/*
    Number of trailing Zeros = Number of Five in
*/

int main()
{
    saimon();
    int n;
    cin >> n;
    int cnt5 = 0;
    while(n>0){
        cnt5 += n/5;
        n/=5;
        
    }

    cout<<cnt5<<endl;
    return 0;
}