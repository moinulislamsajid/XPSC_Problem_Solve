#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="abcdefghijklmnopqrstuvwxyz";
    //cout<<s[22]<<endl;

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n>=3 && n<=28)
        {
            int ans = n-2;
            //cout<<ans<<endl;
            cout<<"aa"<<s[ans-1]<<endl;
        }
        else if(n>=29 && n<=53)
        {
            int ans = n-1;
            int ans2 = ans-26;
            cout<<'a'<<s[ans2-1]<<'z'<<endl;
        }
        else
        {
            int ans = n-52;
            cout<<s[ans-1]<<"zz"<<endl;
        }
    }
}
