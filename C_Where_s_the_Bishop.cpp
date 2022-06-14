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
        char arr[8][8];
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> arr[i][j];

       vector<int>row;
       vector<int>column;

       for(int i=0;i<8;i++)
       {
        int cnt=0;
        for(int j=0;j<8;j++)
        {
         if(arr[i][j]=='#')
            cnt++;
        }
        row.push_back(cnt);
       }

       for(int i=0;i<8;i++)
       {
        int cnt=0;
        for(int j=0;j<8;j++)
        {
         if(arr[j][i]=='#')
            cnt++;
        }
        column.push_back(cnt);
       }
        int x,y;
        for(int i=1;i<=8-2;i++)
        {
           if(row[i-1]==2 and row[i]==1 and row[i+1]==2)
           {
            x=i;
            break;
           }
        }
        for(int i=1;i<=8-2;i++)
        {
           if(column[i-1]==2 and column[i]==1 and column[i+1]==2)
           {
            y=i;
            break;
           }
        }
       cout<<x+1<<" "<<y+1<<endl;
    }
    return 0;
}