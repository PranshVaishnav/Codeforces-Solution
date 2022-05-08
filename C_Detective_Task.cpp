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
        string s;
        cin >> s;
        string a = "1" + s + "0";

        int last_1 = 0;
        int first_zero = 0;
        if (s.length() == 1)
        {
            cout << 1 << endl;
            continue;
        }
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '1')
                last_1 = i;
        }

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '0')
            {
                first_zero = i;
                break;
            }
        }
        
        if (last_1 == 0 and first_zero != a.length()-1)
        {
            cout << first_zero-last_1 << endl;
        }
        else if (last_1 == 0 and first_zero == a.length()-1)
        {
            cout << first_zero-last_1-1<< endl;
        }
        else if (last_1 != 0 and first_zero == a.length()-1)
        {
            cout << first_zero-last_1 << endl;
        }
        else
        {
            cout << first_zero-last_1 + 1 << endl;
        }
    }
    return 0;
}