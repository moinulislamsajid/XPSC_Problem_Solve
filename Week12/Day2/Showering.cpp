#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;

        vector<pair<int,int>> v(n);

        for(int i=0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            v[i] = {a,b};
        }

        sort(v.begin(),v.end());

        bool shaw = false;

        if(v[0].first>=s)
        {
            shaw = true;
        }

        for(int i=1; i<n; i++)
        {
            int check = v[i].first - v[i-1].second;

            if(check>=s)
            {
                shaw = true;
            }
        }

        if(m-v[n-1].second>=s)
        {
            shaw = true;
        }

        if(shaw)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
