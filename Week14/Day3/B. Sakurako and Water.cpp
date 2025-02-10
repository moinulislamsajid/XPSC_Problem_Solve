#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int num[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>num[i][j];
        }
    }

    int sum=0;

    for(int k=0; k<n; k++)
    {
        int i=0,j=k,mx=0;

        while(i<n && j<n)
        {
            if(num[i][j]<0)
            {
                mx = min(mx,num[i][j]);
            }
            i++;
            j++;
        }

        sum+=abs(mx);

    }


    for(int k=1; k<n; k++)
    {
        int i=k,j=0,mx=0;

        while(i<n && j<n)
        {
            if(num[i][j]<0)
            {
                mx = min(mx,num[i][j]);
            }
            i++;
            j++;
        }
        sum+=abs(mx);
    }


    cout<<sum<<endl;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}
