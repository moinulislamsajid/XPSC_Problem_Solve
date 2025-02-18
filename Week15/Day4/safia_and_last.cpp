#include<bits/stdc++.h>
#define ll long long int
using  namespace std;
int main()
{

    ll i,j,k,m,n,c,t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+3],b[n+3];
        multiset<ll>need;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=n; i++)
        {
            cin>>b[i];
            if(a[i]!=b[i])
            {
                need.insert(b[i]);
            }
        }
        bool found=0;
        cin>>m;
        ll d[m+3];
        for(i=1; i<=m; i++)cin>>d[i];
        if(need.find(d[m])!=need.end())
        {
            found=1;
        }
        for(i=1; i<=n; i++)
        {
            if(a[i]==b[i] && b[i]==d[m])found=1;
        }
        if(!found)
        {
            cout<<"NO\n";
            continue;
        }
        for(i=m; i>=1; i--)
        {
            x=d[i];
            if(need.find(x)!=need.end())
            {
                 need.erase(need.find(x));
            }

        }
        if(!need.empty())
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}

