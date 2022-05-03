/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    while (t--)
    {

        int a;
        int b;

        int x;
        int y;
        cin >> x;
        cin >> y;
        if (y < x)
        {
            cout << "0 0" << endl;
            continue;
        }
        if (x == y)
        {
            cout << "1 1" << endl;
            continue;
        }
        if (y % x == 0)
        {
            a = y / x;
             cout << 1 << " " << a << endl;
             continue;
        }
        else
        {
            cout << "0 0" << endl;
            continue;
        }
       
    }
    return 0;
}