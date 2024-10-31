#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    map<string,string> up,look;

    for(int i=1; i<=t; i++)
    {
        string s1,s2;
        cin>>s1>>s2;

        if(look.find(s1) != look.end())
        {
            string ss= look[s1];
            up[ss] = s2;
            look.erase(s1);
            look[s2] = ss;
        }
        else
        {
            up[s1] = s2;
            look[s2] = s1;
        }

    }

    cout<<up.size()<<endl;

    for(auto [l,m] : up)
    {
        cout<<l<<" "<<m<<endl;
    }


}

