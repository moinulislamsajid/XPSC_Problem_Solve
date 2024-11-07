#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<pair<int,int>> st;
    multiset<pair<int, int>> mlst;
    int cNo = 1;
    vector<int> ans;
    for (int i=0; i<n; i++)
    {
        int t;
        cin>>t;
        if (t == 1)
        {
            int mny;
            cin>>mny;
            st.insert({cNo, mny});
            mlst.insert({mny, -cNo});
            cNo++;
        }
        else if(t == 2)
        {
            int p = st.begin()->first, mny = st.begin()->second;
            ans.push_back(p);
            st.erase(st.begin());
            mlst.erase({mny, -p});
        }
        else
        {
            int p = -mlst.rbegin()->second, mny = mlst.rbegin()->first;
            ans.push_back(p);
            mlst.erase(--mlst.end());
            st.erase({p, mny});
        }
    }
    for(auto val : ans)
    {
        cout<<val<< " ";
    }

}
