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
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            arr.push_back(z);
        }
        int a = *min_element(arr.begin(), arr.end());
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i] - a;
        }
        cout<<sum<<endl;
    }
    return 0;
}