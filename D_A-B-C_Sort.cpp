/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;


#define int long long 

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


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
            int x;
            cin >> x;
            arr.push_back(x);
        }

        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                if(arr[i+1]<arr[i])  swap(&arr[i],&arr[i+1]);
            }
        }
        
         if (n % 2 != 0)
        {
            for (int i = 1; i < n; i += 2)
            {
                if(arr[i+1]<arr[i])  swap(&arr[i],&arr[i+1]);
            }
        }

        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}