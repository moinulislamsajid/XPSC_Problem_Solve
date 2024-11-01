#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    map<string,string> mp;

    for(int i=0; i<n; i++)
    {
        string sN,sIp;
        cin>>sN>>sIp;
        mp[sIp] = sN;
    }

    for(int i=0; i<m; i++)
    {
        string cmd,cIp;
        cin>>cmd>>cIp;

        string fiIp = cIp.substr(0,cIp.size()-1);
        cout<<cmd<<" "<<cIp<<" #"<<mp[fiIp]<<endl;
    }
}
