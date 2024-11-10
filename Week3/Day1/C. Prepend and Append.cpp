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
        string s;
        cin>>s;


        int st=0,e=n-1,ans=n;
        while(st<=e)
        {
            if(s[st]==s[e])
            {
                break;
            }
            else
            {
                ans-=2;
                st++;
                e--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
