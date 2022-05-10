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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
            mp[x]++;
        }

        int cnt = 0;
        int flag=0;
        for(auto i:mp)
        {
            if(i.second>1)
            {
                flag=1;
                break;
            }
        }
        sort(arr.begin(),arr.end());
        if(mp[0]>0)
        {
            cnt+=(arr.size()-mp[0]);
        }
        else if(flag){
            cnt+= arr.size();
        }
        else{
            cnt+=arr.size()+1;
        }
        cout<<cnt<<endl;
    }
    return 0;
}