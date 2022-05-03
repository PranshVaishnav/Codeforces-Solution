/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string a;
        string b;
        cin >> a;
        cin >> b;
        int flag = 0;
        for (int i = 0; i < b.length(); i++)
        {
            if (b[i] == 'a')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1 && b.length() != 1)
        {
            cout << -1 << endl;
            continue;
        }
        else if (flag == 1 && b.length() == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else{
            cout<<pow(2,a.length())<<endl;
        }
    }
    return 0;
}