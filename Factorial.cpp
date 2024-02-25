#include<bits/stdc++.h>
using namespace std;

/*using long long we can calculate factorial of less than 20..to calculate factorial of greater
than 20 we can us array
*/

vector<int> Fact(int n){
    vector<int>res;
    res.push_back(1);
    for(int x=2;x<=n;x++){
        int carry = 0;
        for(int i=0;i<res.size();i++){
            int val = res[i]*x + carry;
            res[i] = val %10;
            carry = val / 10;
        }
    }
}

int main()
{
    

    return 0;
}