/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isPalindrome(string s)
{
     string P = s;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (s == P) {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else {
        // return "No"
        return false;
    }
}
signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        int interval;
        cin>>s;
        cin>>interval;
        int pos = s.find(":");
        int min = stoi(s.substr(pos + 1));
        int hrs=stoi(s.substr(0,pos)); 

        int cnt=0;
        while(hrs<=23)
        {
            string a="";
            min+=interval;
            if(min>59)
            {
              hrs+=hrs/60;
              min=min%60;
            }
            if(hrs/10==0)
            {
                a="0"+to_string(hrs);
            }
            else {
                a=to_string(hrs);
            }
            if(min/10==0)
            {
              a+="0"+to_string(min);
            }
            else{
                a+=to_string(min);
            }

            if(isPalindrome(a))
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}