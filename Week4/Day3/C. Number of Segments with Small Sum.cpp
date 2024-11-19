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

        if(sum<=S)
        {
            ans+=(h-l+1);
        }
        else
        {
            while(sum>S && l<=h)
            {
                sum-=v[l];
                l++;
            }
            if(sum<=S)
            {
                ans+=(h-l+1);
            }
        }

        h++;
    }

    cout<<ans<<endl;

}
