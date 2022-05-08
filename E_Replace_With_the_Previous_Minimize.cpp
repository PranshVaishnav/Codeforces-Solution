/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

int value(char a)
{
    return a-'a'+1;
}


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
        cin>>n;
        int k;
        cin>>k;
        string s;
        cin>>s;
        char in=s[0];
        int i=0;
        while(k>0 )
        {
             if(value(s[i])<k)
             {
              s[i]='a';
              k=k-value(s[i]);
             }
             else{
                 s[i]=s[i]-k;
                 k=0;
             }
             
        }
        int x=i;
        for(int i=x;i<n;i++)
        {
            if(s[i]>in)
            {
                continue;
            }
            else if(s[i]<s[x] and s[i]>)
            {
                s[i]=s[x];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}