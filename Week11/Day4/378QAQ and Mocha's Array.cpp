#include<bits/stdc++.h>
#define ll long long
using namespace std;


const int N = 1e5+10;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  a[n];
        int res=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                res=1;
            }
        }
        if(res)
        {
            cout<<"Yes\n";
        }
        else
        {
            sort(a+1,a+1+n);
            vector<int> b;
            for(int i=2; i<=n; i++)
            {
                if(a[i]%a[1])
                {
                    b.push_back(a[i]);
                }
            }
            sort(b.begin(),b.end());
            n = b.size();
            for(int j=1; j<n; j++)
            {
                if(b[j]%b[0])
                {
                    res=1;
                    break;
                }
            }
            if(!res)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }

    }
}
