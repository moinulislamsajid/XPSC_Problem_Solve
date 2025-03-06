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

        //int pos=0,pos1=0;
        int ans = 0;

        for(int i=1; i<n; i++)
        {
            ans+=(s[i]=='@');

            if(s[i]=='*' && s[i-1]=='*')
            {
                break;
            }
        }

        cout<<ans<<endl;
    }
}
