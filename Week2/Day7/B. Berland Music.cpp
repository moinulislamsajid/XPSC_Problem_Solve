#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }

        string s;
        cin>>s;

        vector<pair<int,int>>fav;
        vector<pair<int,int>>dislike;

        for(int i = 0; i<n; i++)
        {
            if (s[i] == '1')
            {
                fav.push_back({v[i], i});
            }
            else
            {
                dislike.push_back({v[i], i});
            }
        }

        sort(fav.begin(),fav.end());
        sort(dislike.begin(),dislike.end());

        vector<int> ans(n);

        int cIndx= 1;
        for(auto &s : dislike)
        {
            ans[s.second] = cIndx++;
        }

        for(auto &s : fav)
        {
            ans[s.second] = cIndx++;
        }

        for (int i = 0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
