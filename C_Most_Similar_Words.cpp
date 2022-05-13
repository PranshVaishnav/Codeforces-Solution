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
        int m;
        cin >> n >> m;
        vector<string> arr;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            arr.push_back(s);
        }
        int total = INT_MAX;
        int min = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                total = 0;
                for (int k = 0; k < m; k++)
                {
                    total += abs(arr[i][k] - arr[j][k]);
                }
                if (total < min)
                {
                    min = total;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}