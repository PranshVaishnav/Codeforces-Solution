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
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
        }
        int maximum = cnt;
        int local_maximum = 0;
        int i = 0;
        int j = s.length() - 1;
        int one_cnt = 0;
        while (i <= j)
        {
            if (s[i] == '0' && s[j] == '0')
            {
                local_maximum = max(one_cnt, cnt-2);
                cnt=cnt-2;
                i++;
                j--;
                maximum = local_maximum;
            }
            else if (s[i] == '0' & s[j] != '0')
            {

                local_maximum = max(one_cnt, cnt-1);
                i++;
                cnt--;
                maximum = local_maximum;
            }
            else if (s[i] != '0' && s[j] == '0')
            {
            
                local_maximum = max(one_cnt, cnt-1);
                cnt--;
                j--;
                maximum = local_maximum;

            }
            else
            {
                local_maximum = max(one_cnt+1, cnt);
                i++;
                if (local_maximum <= maximum)
                {
                    maximum = local_maximum;
                    one_cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        //  cout<<a<<b<<endl;
        cout << maximum << endl;
    }
    return 0;
}