/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

 
// initializing a string to store
// result of reversed stack
string ns;
 
// Below is a recursive function
// that inserts an element
// at the bottom of a stack.
void insert_at_bottom(char x,stack<char>&st)
{
 
    if(st.size() == 0)
    st.push(x);
 
    else
    {
         
        // All items are held in Function Call
        // Stack until we reach end of the stack
        // When the stack becomes empty, the
        // st.size() becomes 0, the above if
        // part is executed and the item is
        // inserted at the bottom
             
        char a = st.top();
        st.pop();
        insert_at_bottom(x,st);
 
        // push allthe items held in
        // Function Call Stack
        // once the item is inserted
        // at the bottom
        st.push(a);
    }
}
 
// Below is the function that
// reverses the given stack using
// insert_at_bottom()
void reverse(stack<char>&st)
{
    if(st.size()>0)
    {
         
        // Hold all items in Function
        // Call Stack until we
        // reach end of the stack
        char x = st.top();
        st.pop();
        reverse(st);
         
        // Insert all the items held
        // in Function Call Stack
        // one by one from the bottom
        // to top. Every item is
        // inserted at the bottom
        insert_at_bottom(x,st);
    }
}

signed main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fixed << setprecision(12);
    int t = 1;
    cin >> t;
    int gcode = 0;
    while (t--)
    {
        gcode++;
        stack<char> st;
        int n;
        cin >> n;
        vector<string> arr;
        unordered_map<int, char> start;
        unordered_map<int, char> end;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            start[i] = s[0];
            end[i] = s[s.length() - 1];
            arr.push_back(s);
        }

        for (auto i : arr[0])
        {
            st.push(i);
        }

        // while(!st.empty())
        // {
        //     cout<<st.top()<<" ";
        //     st.pop();
        // }

        int check = 1;
        while (check)
        {
            check = 0;
            int fl = 0;
            for (auto sti : start)
            {
                if (st.top() == sti.second)
                {
                    fl = 1;
                    for (int i = 0; i < arr[sti.first].length(); i++)
                    {
                        st.push(arr[sti.first][i]);
                    }
                }
            }
            if (fl)
            {
                break;
            }
            else
            {
                check = 1;
            }
        }
       
        reverse(st);
        
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }

        check=1;
        // while (check)
        // {
        //     check = 0;
        //     int fl = 0;
        //     for (auto sti : end)
        //     {
        //         if (st.top() == sti.second)
        //         {
        //             fl = 1;
        //             for (int i = arr[sti.first].length()-1; i >=0 ; i--)
        //             {
        //                 st.push(arr[sti.first][i]);
        //             }
        //         }
        //     }
        //     if (fl)
        //     {
        //         break;
        //     }
        //     else
        //     {
        //         check = 1;
        //     }
        // }

        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }

        std::cout << "Case #" << gcode << ":" << '\n';
    }
    return 0;
}