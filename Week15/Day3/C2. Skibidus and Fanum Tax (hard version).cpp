#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll x,y;
    cin>>x>>y;
    vector<ll>v(x);
    for (ll i=0; i<x; i++)
    {
        cin >> v[i];
    }

    set<ll> st;
    for (ll i=1; i<=y; i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
    }

    vector<ll> ans;
    bool flag = true;
    for (ll i = 0; i < x; i++)
    {
        if (i==0)
        {
            ll x = v[i];
            ll y = *st.begin() - v[i];
            if (x < y) ans.push_back(x);
            else ans.push_back(y);
        }
        else
        {
            ll X = v[i], Y = -1;
            bool goal = false;
            auto in = st.lower_bound(ans.back() + v[i]);
            if (in != st.end())
            {
                Y = *in - v[i];
                goal = true;
            }

            if (goal)
            {
                ll mn = (X < Y) ? X : Y;
                ll mx = (X > Y) ? X : Y;
                if (mn >= ans.back())
                {
                    ans.push_back(mn);
                }
                else
                {
                    ans.push_back(mx);
                }
            }
            else
            {
                if (X >= ans.back())
                {
                    ans.push_back(X);
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
    }

    if (flag)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
