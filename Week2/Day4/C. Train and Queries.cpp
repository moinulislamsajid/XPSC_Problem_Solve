#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;

        map<int,set<int>> mp;

        for (int i=1;i<=n;i++)
        {
            int y;
            cin>>y;
            mp[y].insert(i);
        }


        for (int i=1; i<=m; i++)
        {
            int k,l;
            cin>>k>>l;

            if ((mp.find(k) == mp.end()) || (mp.find(l) == mp.end()))
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int st = *mp[k].begin();
                int en = *mp[l].rbegin();

                if (st<en)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }


}
