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
        cin>>s;
         int a=0;
         int b=0;
        for(int i=0;i<s.length();i++)
        {
            if(i<3)
            {
              a+=s[i]-'0'+1;
            }
            else{
b+=s[i]-'0'+1;
            }
        }
        if(a==b)
        {
cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}