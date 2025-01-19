#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int num[k+10];
        int ans=0;
        for(int i=1; i<=k; i++)
        {
            cin>>num[i];
        }

        sort(num+1,num+k+1);

        for(int i=1; i<=k-1; i++)
        {
            if(num[i]>1)
            {
                ans+=num[i]-1+num[i];
            }
            else
            {
                ans+=1;
            }
        }

        cout<<ans<<endl;
    }
}
