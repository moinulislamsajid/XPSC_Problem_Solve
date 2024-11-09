#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;


    while(t--)
    {
        int x,y;
        cin>>x>>y;
        string a,b;
        cin>>a;
        cin>>b;

        set<int> st;
        priority_queue<char,vector<char>, greater<char>> pq;



        for(int i=0; i<y; i++)
        {
            int c;
            cin>>c;
            st.insert(c-1);
        }

      // cin>>b;

        for(int i=0; i<b.size(); i++)
        {
            pq.push(b[i]);
        }

        for(auto it: st)
        {
            a[it]=pq.top();
            pq.pop();
        }
        cout<<a<<endl;
    }

    return 0;
}
