#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t--)
    {
        long long int n,m;
        cin>>n>>m;

        long long int len = max(n-m,(long long int)0);
        long long int res = n+m;

        long long int in =0;
        long long int ans = 0;

        for(long long int i=0; i<31; i++)
        {

            if(((1<<i)&len)==0)
            {
                long long int check = (len | (1<<i)) - in;
                if(check<=res)
                {
                    ans|=(1<<i);
                }
            }
            else
            {
                ans|=(1<<i);
                in|=(1<<i);
            }
        }

        cout<<ans<<endl;
    }


}
