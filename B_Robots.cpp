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
        int r;
        int c;
        cin >> r >> c;
        vector<string> arr;
        for (int i = 0; i < r; i++)
        {
            string s;
            cin >> s;
            arr.push_back(s);
        }
        int x = 0;
        int y = 0;
        int flag = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < arr[i].length() && flag == 0; j++)
            {
                if (arr[i][j] == 'R')
                {
                    x = i;
                    y = j;
                    flag = 1;
                    break;
                }
            }
        }
        int x_flag = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < arr[i].length() && x_flag==0; j++)
            {
                if (arr[i][j] == 'R')
                {
                    
                    if(i<x || j<y)
                    {
                        x_flag=1;
                    }
                    break;
                }
            }
        }
       if(x_flag)
       {
           cout<<"NO"<<endl;
       }
       else{
           cout<<"YES"<<endl;
       }
    }
    return 0;
}