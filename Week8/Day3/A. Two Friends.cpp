#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        v.push_back(x);
    }

    map<int,int> mp;

    for(int i=0; i<n; i++)
    {
        mp[v[i]] = i+1;
    }

    for(int i=0; i<n; i++)
    {
        if(mp[i+1]==v[i])
        {
            cout<<2<<endl;
            return;
        }
    }

    cout<<3<<endl;
}

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

