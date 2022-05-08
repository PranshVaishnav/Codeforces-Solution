/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k;
        cin >> k;
        set<char> st;
        for (int i = 0; i < k; i++)
        {
            char c;
            cin >> c;
            st.insert(c);
        }
        int first = -1;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            if (st.find(s[i]) != st.end())
            {
                first = i;
                break;
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (st.find(s[i]) != st.end())
            {
                last = i;
                cnt++;
            }
        }

        if (first == s.length() - 1)
        {
            cout << s.length() - 1 << endl;
            continue;
        }

        if (first == -1)
        {
            cout << 0 << endl;
            continue;
        }
        int total_el = last;

        if (st.find(s[0]) != st.end())
        {
            cnt--;
        }
       
        
        if (cnt == 0)
        {
            cout << 0 << endl;
            continue;
        }
         if (st.find(s[s.length() - 1]) != st.end())
        {
            cout << (total_el /cnt) << endl;
            continue;
        }
        cout << (total_el /cnt)<< endl;
    }
    return 0;
}