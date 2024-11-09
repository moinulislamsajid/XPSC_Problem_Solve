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
        char c;
        cin>>c;
        string s;
        cin>>s;
        s+=s;
        set<int> st;
        if(c=='g')
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='g')
                {
                    st.insert(i);
                }
            }

            int res=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]==c)
                {
                    int f=*st.lower_bound(i);
                    res=max(res,(f-i));
                }
            }
            cout<<res<<endl;
        }
    }
    return 0;
}
