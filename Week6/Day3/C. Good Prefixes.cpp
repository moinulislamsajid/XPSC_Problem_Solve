#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;

        vector<long long int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        long long int mx=0,sum=0,cnt=0;
        for(int i=0; i<n; i++)
        {
            mx=max(mx,v[i]);
            sum+=v[i];
            if(sum-mx==mx)
            {
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
}
