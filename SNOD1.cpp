#include<bits/stdc++.h>
using namespace std;
/*
using complexity O(n) >>
*/
int main()
{
    int n;
    cin >> n;
    int snod = 0;
    for(int i=1;i<=n;i++)
    {
        snod+=(n/i);
    }
    cout<<snod<<endl;
    return 0;
}

/*
    1:1
    2:1,2        contribution of(1) = 10
    3:1,3        con(2) = 5 (10/2)
    4:1,2,4      con(3) = 3 (10/3)
    5:1,5
    6:1,2,3,6
    7:1,7
    8:1,2,4,8
    9:1,3,9
    10:1,2,5,10
*/