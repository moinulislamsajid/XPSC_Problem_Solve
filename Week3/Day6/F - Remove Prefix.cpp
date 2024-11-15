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

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        set<int> st;
        int op = n;

        for(int i=n-1; i>=0; i--)
        {
            if(st.find(v[i]) != st.end())
            {
                break;
            }

            st.insert(v[i]);
            op=i;
        }

        cout<<op<<endl;
    }
}
