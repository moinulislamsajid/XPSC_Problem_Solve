#include <bits/stdc++.h>
using namespace std;

int main()
{


    long long int t;
    cin>>t;


    while (t--)
    {
        long long int  n, k;
        cin>>n>>k;
        string s;
        cin >> s;

        set<char> st;

        for (char ch : s)
        {
            if (st.count(ch))
            {
                st.erase(ch);
            }
            else
            {
                st.insert(ch);
            }
        }


        if (st.size() <= (k + 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

}
