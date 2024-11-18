#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int a,b,n,S;
        cin>>a>>b>>n>>S;

        long long int v = min(a,S/n);
        long long int rem = S - (v*n);

        if(b>=rem)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
