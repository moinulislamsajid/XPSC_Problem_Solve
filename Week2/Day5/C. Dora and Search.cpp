#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int t;
    cin>>t;

    while (t--)

    {
        int n;
        cin >> n;
        vector<int>v(n);
        set<int>st;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            st.insert(v[i]);
        }

        int l=0, r=n - 1;
        bool flag = false;


        while (r>l)
        {
            int minV = *st.begin();
            int maxV = *st.rbegin();

            if ((v[l] != minV && v[l] != maxV) && (v[r] != minV && v[r] != maxV))
            {
                cout<<l + 1<< " " <<r + 1<<endl;
                flag = true;
                break;
            }

            if (v[l] == minV || v[l] == maxV)
            {
                st.erase(v[l]);
                l++;
            }
            else if (v[r] == minV || v[r] == maxV)
            {
                st.erase(v[r]);
                r--;
            }
        }

        if (flag == false)
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}
