#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    vector<string> str;

    while(t--)
    {
        string s;
        cin>>s;

        str.push_back(s);
    }

    map<string,int> mp;

    string sAns;

    for(int i=str.size()-1; i>=0; i--)
    {

        if(mp[str[i]]==0)
        {
            string p = str[i];
            sAns.push_back(p[p.size()-2]);
            sAns.push_back(p[p.size()-1]);
            mp[str[i]]=1;
        }
    }

    cout<<sAns<<endl;
}
