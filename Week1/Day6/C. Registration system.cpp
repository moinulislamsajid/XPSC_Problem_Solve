#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    map<string,int> mp;

    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;

        if(mp.find(str) == mp.end())
        {
            cout<<"OK"<<endl;
            mp[str] = 1;
        }
        else
        {
            int c = mp[str];

            string nName = str + to_string(c);

            while(mp.find(nName) != mp.end())
            {
                c++;
                nName = str + to_string(c);

            }

            cout<<nName<<endl;
            mp[str] = c+1;
            mp[nName] = 1;
        }
    }


}
