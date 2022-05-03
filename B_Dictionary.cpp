/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    while (t--)
    {
        char s[2];
        cin>>s[0];
        cin>>s[1];
        int cnt=0;
        cnt+=(s[0]-'a')*25;
        if(s[1]>s[0])
        {
             cnt+=s[1]-'a';
        }
        else{
              cnt+=(s[1]-'a')+1;
        }
        cout<<cnt<<endl;
    }
    return 0;
}