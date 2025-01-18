#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    bool t=true,p=false;

    while(v.size()>1)
    {
        if(t)
        {
            auto f = v.begin();
            v.erase(f);
            t=false;
            p=true;
        }
        else if(p)
        {
            auto l = v.end()-1;
            v.erase(l);
            t=true;
            p=false;
        }
    }

    cout<<v[0]<<endl;
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
