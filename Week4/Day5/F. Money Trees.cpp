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

        vector<long long int> fruit(n);
        vector<long long int> tree(n);

        for(int i=0; i<n; i++)
        {
            cin>>fruit[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>tree[i];
        }

        long long int l=0,h=0,cs=0,ans=0;

        while(h<n)
        {
            cs+=fruit[h];

            while(l<h && (tree[h-1] % tree[h] !=0) || cs>k)
            {
                cs-=fruit[l];
                l++;
            }

            if(cs<=k)
            {
                ans = max(ans,h-l+1);
            }

            h++;
        }

        cout<<ans<<endl;
    }
}
