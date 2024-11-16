#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<long long int> v;

        long long int t=0;
        int mnc=0;

        for(int i=0; i<n; i++)
        {
            long long int L=i;
            long long int R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L)
                {
                    mnc++;
                    t+=R;
                    v.push_back(R-L);
                }
                else
                {
                    t+=L;
                }
            }
            else
            {
                if(L>R)
                {
                    mnc++;
                    v.push_back(L-R);
                    t+=L;
                }
                else
                {
                    t+=R;
                }
            }
        }

        vector<long long int> ans(n+1);

        for(int i=mnc; i<=n; i++)
        {
            ans[i]=t;
        }

        sort(v.begin(),v.end(),greater<long long int>());

        for(int i=mnc-1; i>=1; i--)
        {
            t-=v.back();
            v.pop_back();
            ans[i]=t;
        }



        for(int i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
