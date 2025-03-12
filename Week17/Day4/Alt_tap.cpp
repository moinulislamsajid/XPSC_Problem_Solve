#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    stack<string> st;
    if (n == 1)
    {
        string s;
        cin >> s;
        cout << s[s.size() - 2] << s[s.size() - 1] << endl;
    }
    else
    {
        for (ll j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            st.push(s);
        }
        unordered_set<string> aman;
        while (!st.empty())
        {
            if (aman.find(st.top()) == aman.end())
                cout << st.top()[(st.top()).size() - 2] << st.top()[(st.top()).size() - 1];
            aman.insert(st.top());
            st.pop();
        }
        cout << endl;
    }
    return 0;
}

