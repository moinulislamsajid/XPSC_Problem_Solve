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
        string str;
        cin>>str;

        vector<int> v;

        for(int i=0; i<n; i++)
        {
            if(str[i]=='B')
            {
                v.push_back(i);
            }
        }

        if(v.empty())
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(v.back() - v.front())+1<<endl;
        }
    }
}
