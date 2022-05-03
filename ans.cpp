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
        int count = 0;
        int count_2 = 0;
        int len = s.length();
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            count += s[i] - 'a' + 1;
        }
        if (len == 1)
        {
            cout<<"Bob "<<count<<endl;
            continue;
        }

        if (len % 2 == 0)
        {
            cout << "Alice " << count << endl;
        }
        else
        {
            if(s[0]>s[s.length()-1])
            s[0]=s[s.length()-1];
            count-=s[0]-'a'+1;
            count_2=s[0]-'a'+1;
            cout << "Alice " << count-count_2<< endl;
        }
    }
    return 0;
}