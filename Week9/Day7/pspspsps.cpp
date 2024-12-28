#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == 's')
    {
        s[0] = '.';
    }
    if (s.back() == 'p')
    {
        s.back() = '.';
    }
    bool fp = false;
    bool fs = false;
    for (const auto c : s)
    {
        switch (c)
        {
        case 'p':
            fp = true;
            break;
        case 's':
            fs = true;
            break;
        }
    }
    //cout << (fp && fs ? "NO" : "YES") << '\n';

    if(fp == true && fs==true)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
