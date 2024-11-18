#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,s;
    cin>>n>>s;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    long long int l=0,h=0,sum=0,ans=0;

    while(h<n)
    {
        sum+=v[h];

        if(sum<=s)
        {
            ans = max(ans,h-l+1);
        }
        else
        {
            sum-=v[l];
            l++;
        }

        h++;
    }

    cout<<ans<<endl;
}
