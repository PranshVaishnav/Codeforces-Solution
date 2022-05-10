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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.length() - 1; i += 2)
        {
            if (s[i] != s[i + 1])
            {
                cnt++;
            }
        }
        int one = 0;
        int zero = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        int r = 0;
        int t = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1] && s[i] == '1')
            {
                r++;
            }
            else if (s[i] == s[i + 1] && s[i] == '0')
            {
                t++;
            }
        }

        int total = 1;
        string ans;
        char a;
        if (one > zero)
            a = '1';
        else if (zero > one)
            a = '0';
        else
        {
            if (r > t)
                a = '1';
            else
                a = '0';
        }
        for (int i = 0; i < s.length() - 1; i += 2)
        {
            if (s[i] == s[i + 1] && s[i] == '1')
            {
                ans += '1';
                a = '1';
            }
            else if (s[i] == s[i + 1] && s[i] == '0')
            {
                ans += '0';
                a = '0';
            }
            else
            {
                ans += a;
            }
        }
        for (int i = 0; i < ans.length() - 1; i++)
        {
            if (ans[i] != ans[i + 1])
            {
                total++;
            }
        }
        cout << cnt << " " << total << endl;
    }
    return 0;
}