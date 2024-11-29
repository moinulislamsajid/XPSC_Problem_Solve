#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<ll> v(n+1,0);
        for(int i=n-k+1; i<=n; i++)
        {
            cin>>v[i];
        }
        vector<ll> a(n+1);

        if(n==1 or k==1)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        for(int i=n; i>=n-k+2; i--)
        {
            a[i]=(v[i]-v[i-1]);
        }

        bool flag=true;

        for(int i=n-k+2; i<=n; i++)
        {
            if(i+1<=n and a[i+1]<a[i])
            {
                flag=false;
                break;
            }
        }

        if(!flag)
        {
            cout<<"No"<<endl;
            continue;
        }

        for(int i=n-k+1; i>1; i--)
        {
            a[i]=a[i+1];
            v[i-1]=v[i]-a[i];
        }
        a[1]=v[1];

        for(int i=1; i<=n; i++)
        {
            if(i+1<=n and a[i+1]<a[i])
            {
                flag=false;
                break;
            }
        }

        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }


    }
    return 0;
}
