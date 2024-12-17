#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n,k,b,mis,lst;
        cin>>n>>k;
        vector < ll > v,t;
        for(ll i = 0 ; i < n ; i++)
        {
            cin>>b;
            v.push_back(b);
        }
        t = v;
        sort(t.begin(), t.end());
        mis = n;
        for(ll i = 0; i < n ; i++)
        {
            if(t[i] != i)
            {
                mis = i;
                break;
            }
        }
        ll bkp;
        for(ll i = 0 ; i < n ; i++)
        {
            bkp = v[i];
            v[i] = mis;
            mis = bkp;
        }
        v.push_back(mis);

        lst = (k-1)%(n+1);
        for(ll i = (n+1-lst); i < (n+1) ; i++)
        {
            cout<<v[i]<<" ";
        }
        for(ll i = 0; i<(n-lst); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
