#include<bits/stdc++.h>
using namespace std;

int main()
{
    long  long int n,S;
    cin>>n>>S;

    vector<long long int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    long long int l=0,h=0,uC=0,ans=0;
    map<long long int,long long int> mp;

    while(h<n)
    {
        if(mp[v[h]]==0)
        {
            uC++;
        }

        mp[v[h]]++;

        while(uC>S)
        {
            mp[v[l]]--;

            if(mp[v[l]]==0)
            {
                uC--;

            }
            l++;
        }

        ans+=(h-l+1);
        h++;
    }

    cout<<ans<<endl;
}
