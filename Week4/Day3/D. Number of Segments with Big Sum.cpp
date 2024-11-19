#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,S;
    cin>>n>>S;

    vector<long long int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    long long int l=0,h=0,sum=0,ans=0;

    while(h<n)
    {
        sum+=v[h];

        while(sum>=S)
        {
            ans+=(h-l);
            sum-=v[l];
            l++;
        }

        h++;
    }

    cout<<ans<<endl;
}
