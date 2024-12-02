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

        vector<int> v(n+1);

        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }

        int res=0;

        for(int i=1; i<=n; i++)
        {
            res =__gcd(res,abs(v[i]-i));
        }

        cout<<res<<endl;
    }
}
