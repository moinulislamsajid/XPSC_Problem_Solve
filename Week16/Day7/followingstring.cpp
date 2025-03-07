#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin>>tt;

    string ch = "abcdefghijklmnopqrstuvwxyz";


    while(tt--)
    {
        int n;
        cin>>n;

        map<char,int> mp;

        for(int i=0; i<ch.size(); i++)
        {
            mp[ch[i]]=0;
        }
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];

            for(auto child : mp)
            {
                if(child.second==v[i])
                {
                    cout<<child.first;
                    mp[child.first]++;
                    break;
                }
            }

        }

        cout<<endl;
    }

}
