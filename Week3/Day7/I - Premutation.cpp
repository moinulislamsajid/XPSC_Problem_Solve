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

        int mat[n+5][n];

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<n; j++)
            {
                cin>>mat[i][j];
            }
        }

        map<int,int> mp;
        map<int,int>mp1;

        for(int i=1; i<=n; i++)
        {
            mp[mat[i][n-1]] = i;
            mp1[mat[i][n-1]]++;
        }

        int in=0,res;

        for(auto val : mp1)
        {
            if(val.second==1)
            {
                in = val.first;
            }
            else
            {
                res = val.first;
            }
        }

        for(int i=1; i<n; i++)
        {
            cout<<mat[mp[in]][i]<<" ";
        }
        cout<<res<<endl;
    }
}
