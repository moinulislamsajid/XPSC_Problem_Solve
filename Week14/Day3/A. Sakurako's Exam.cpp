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

        if(a==0 && b%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(a%2==1 && b==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            if(a==0 && a%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(a%2==0 && b==0)
            {
                cout<<"YES"<<endl;
            }
        }
        int ans = a*1;
        int ans2 = b*2;

        int sum = ans+ans2;

        if(sum%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            continue;
        }
    }
}
