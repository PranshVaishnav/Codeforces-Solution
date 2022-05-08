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
        int cnt = 0;
        vector<int> arr;
        int i;
        for (i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            arr.push_back(z);
        }

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int j = arr.size() - 1;
        i = j - 1;
        while (i >= 0)
        {
            if (arr[i] >= arr[j] && arr[j] != 0)
            {
                arr[i] = arr[i] / 2;
                cnt++;
                continue;
            }

            i--;
            j--;
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] <= arr[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
            continue;
        }
        cout << cnt << endl;
    }
    return 0;
}