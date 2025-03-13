
#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve()
{
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll mx=0;
    for(int i=0;i<n;i++){
        ll x=v[i]*(n-i);
        mx=max(mx,x);
    }
    cout<<mx<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0 ;
}
