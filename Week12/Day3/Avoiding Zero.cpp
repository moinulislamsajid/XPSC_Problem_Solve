#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve ()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    ll total=0;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        total+=x;
        a[i]=x;
    }
    sort(a.begin(),a.end());
    if(total==0)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            if(sum==0)
                swap(a[i],a[n-1]);
        }
        sum=0;
        int ok=1;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            if(sum==0)
                ok=0;
        }
        if(ok)
        {
            for(int i=0; i<n; i++)
                cout<<a[i]<<" ";
            cout<<"\n";
            return;
        }
        sort(a.begin(),a.end(),greater<>());
        sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            if(sum==0)
                swap(a[i],a[n-1]);
        }
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<"\n";
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
