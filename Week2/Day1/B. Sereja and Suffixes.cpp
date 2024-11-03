#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<int> v1(m);
    for(int i=0; i<m; i++)
    {
        cin>>v1[i];
    }



             set<int> st;
             vector<int> resSi(n);

            for(int i = n-1; i>=0; i--)
            {
                st.insert(v[i]);
                resSi[i] = st.size();
            }

            for(int i=0; i<m; i++)
            {
                cout<<resSi[v1[i] -1]<<endl;
            }


}
