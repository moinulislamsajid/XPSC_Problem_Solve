#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll ans=0;
        for(int bit=0; bit<=12; bit++)
        {
            bool o=false,z=false;
            for(int i=0; i<n; i++)
            {
                bitset<13> b(a[i]);
                o|=(b[bit]==1);
                z|=(b[bit]==0);
            }
            if(o&&z)
            {
                ans+=(1ll<<(ll)bit);
            }
        }
        cout<<ans<<endl;
    }
}
