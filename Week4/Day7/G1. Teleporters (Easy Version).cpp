#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin>>t;

    while(t--)
    {
        long long int n,k;
        cin>>n>>k;

        vector<long long int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];

        }

        for(int i=0; i<n; i++)
        {
            v[i]+=(i+1);
        }

        sort(v.begin(),v.end());

        long long int sum=0,ans=0;

        for(int i=0; i<n; i++)
        {
            if(sum+v[i]>k)
            {
                break;
            }
            else
            {
                sum+=v[i];
                ans++;
            }
        }

        cout<<ans<<endl;
    }
}
