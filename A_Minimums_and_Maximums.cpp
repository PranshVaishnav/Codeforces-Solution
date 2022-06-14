/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int l1, l2, r1, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if (l1 <= l2 and l2 <= r1 )
        {
            cout << max(l1, l2) << endl;
        }
        else if(l2<l1 and l1<=r2)
        {
            cout << max(l1, l2) << endl;
        }
        else{
            cout<<l1+l2<<endl;
        }
    }
    return 0;
}