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
while (t--) {
int a,b,c,d;
 cin>>a>>b>>c>>d;
 int cnt=0;
if(b>a)
cnt++;
if(c>a)
cnt++;
if(d>a)
cnt++;

cout<<cnt<<endl;
}
return 0;
}