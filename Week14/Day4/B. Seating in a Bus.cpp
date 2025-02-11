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

    int l=v[0],r=v[0];

    for(int i=1; i<n; i++)
    {
        if(v[i]+1==l)
        {
            l = v[i];
        }
        else if(v[i]-1==r)
        {
            r = v[i];
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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
