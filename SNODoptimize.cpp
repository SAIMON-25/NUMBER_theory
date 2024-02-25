#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[11];
    int prefix[11];
    arr[0] = prefix[0] = 0;
    for (int i = 1; i <= 10; i++)
    {
        cin >> arr[i];
    }

    for(int i=1;i<=10;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    int q;
    cin >> q; /// q = 10^5
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int sum = prefix[r] - prefix[l-1];
        cout << "Sum of elements from l to r : " << sum << endl;
    }


    return 0;
}