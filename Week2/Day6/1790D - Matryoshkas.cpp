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
        map<int,int>mp;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        sort(v.begin(),v.end());

        int s=0;
        int rem=0;
        for (int i = 0; i<n; i++)
        {
            if (mp[v[i]] > 0)
            {
                s++;

                int cS = v[i];
                while (mp[cS] > 0)
                {
                    mp[cS]--;
                    cS++;
                }
            }
        }

        cout<<s<< endl;
    }
    return 0;
}
