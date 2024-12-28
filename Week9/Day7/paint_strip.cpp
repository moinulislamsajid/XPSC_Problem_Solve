#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       if(n==1)
       {
           cout<<1<<endl;
       }
       else if(n==2)
       {
           cout<<2<<endl;
       }
       else if(n==3)
       {
           cout<<2<<endl;
       }
       else if(n==4)
       {
           cout<<2<<endl;
       }
       else
       {
           long long sum=4,ans=2;
           while(sum<n)
           {
                ans++;
                sum++;
                sum*=2;
           }
           cout<<ans<<endl;
       }
    }
    return 0;
}
