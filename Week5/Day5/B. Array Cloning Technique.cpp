#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> v(n);
        set<ll> ans;
        for(ll i =0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0] == v[n-1])
        {
            cout<<"0\n";
            continue;
        }
        ll c = 0;
        ll mx = 0;
        for(ll i = 0; i<n; i++)
        {
            c++;
            if(v[i]!=v[i+1] || i == n-1)
            {
                if(c>mx)
                {
                    mx = c;
                }
                c=0;
            }
        }
        ll sum = 0;
        for(ll i = mx*2; ; i*=2)
        {

            if(n == i)
            {
                sum+=i/2+1;
                break;
            }
            if(n<i)
            {
                sum+=n-i/2+1;
                break;
            }
            sum = sum + i/2 + 1;
        }

        cout<<sum<<endl;

    }
}
