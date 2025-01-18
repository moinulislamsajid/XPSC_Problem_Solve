#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll sum=0;

        sort(v.begin(),v.end());

        for(int i=1; i<n; i++)
        {
            sum = (sum+(v[i] - v[i-1]));

        }

        cout<<sum<<endl;
    }
}
