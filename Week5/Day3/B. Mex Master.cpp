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
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int zero=0,nonZero=0;

        for(int i=0; i<n; i++)
        {
            if(v[i]!=0)
            {
                nonZero++;
            }
            else
            {
                zero++;
            }
        }

        int res=0;

        if(zero==0)
        {
            res=0;
        }
        else
        {
            if(nonZero>=zero-1)
            {
               res=0;
            }
            else
            {
                int mx = *max_element(v.begin(),v.end());

                if(mx==1)
                {
                    res=2;
                }
                else
                {
                    res=1;

                }

            }
        }

        cout<<res<<endl;
    }
}
