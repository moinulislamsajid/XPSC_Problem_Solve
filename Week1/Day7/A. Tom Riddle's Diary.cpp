#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<string> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    set<string> st;
    vector<string> ans;

    for(int i=0; i<n; i++)
    {
        if(st.find(v[i]) == st.end())
        {
            ans.push_back(v[i]);
            st.insert(v[i]);
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }



}
