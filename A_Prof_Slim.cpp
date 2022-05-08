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
        vector<int> arr;
        int cnt_neg = 0;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            if (z < 0)
            {
                cnt_neg++;
            }
            arr.push_back(z);
        }

        for (int i = 0; i < n; i++)
        {
            if (i < cnt_neg)
            {
                arr[i] = (-1) * abs(arr[i]);
            }
            else
            {
                arr[i] = abs(arr[i]);
            }
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                flag = 1;
                break;
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