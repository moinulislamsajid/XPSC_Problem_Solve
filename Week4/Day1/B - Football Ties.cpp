#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int f=a/3;
        int rf=a%3;

        int s=b/3;
        int sf=b%3;

        cout<<max(rf,sf)<<endl;
    }
}
