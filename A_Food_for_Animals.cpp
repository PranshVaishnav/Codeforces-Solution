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
        int a;
        int b;
        int c;
        cin>>a>>b>>c;
        int x;
        int y;
        cin>>x;
        cin>>y;
        int l=x-a;
        if(l<0)
        l=0;
        int m=y-b;
        if(m<0)
        m=0;
        if(c>=l+m)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}