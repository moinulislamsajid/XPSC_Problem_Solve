#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int ans=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            ans=min(ans,abs(v[i]-v[i+1]));
        }
        else if(i==(n-1))
        {
            ans=min(ans,abs(v[i]-v[i-1]));
        }
        else
        {
            ans=min(ans,max(abs(v[i]-v[i+1]),abs(v[i]-v[i-1])));
        }
    }
    cout<<ans<<endl;
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
