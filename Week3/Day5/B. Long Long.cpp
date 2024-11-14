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
        long long sum=0;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=abs(v[i]);
        }

        int l=0,h=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]<0)
            {
                if(l==0)
                {
                    l=1;
                    h++;
                }
            }
            else if(v[i]>0)
            {
                l=0;
            }

        }
        cout<<sum<<" "<<h<<endl;
    }
}
