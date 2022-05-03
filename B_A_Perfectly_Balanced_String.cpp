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
        string s;
        cin >> s;
        int len = s.length();

        unordered_map<char, int> mp;

        for (int i = 0; i < len; i++)
        {
            mp[s[i]]++;
        }
        int count = 0;
        for (auto i : mp)
        {
            count++;
        }
        if (count == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        int j = 0;
        int k = len - 1;
        int flag = 0;
        while (j < k)
        {
            if (s[j] == s[k])
            {
                for (int i = j; i <= k; i++)
                {
                    if (mp[s[i]] > 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            else
            {
                mp[s[j]]--;
                mp[s[k]]--;
                j++;
                k--;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}