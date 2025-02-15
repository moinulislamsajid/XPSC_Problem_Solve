#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int tt;
    cin>>tt;
    while (tt--)
    {
        long long int n;
        cin>>n;

        string st1, st2, st3;
        cin>>st1;
        st3 = st1;

        map<char, long long int> mp;

        for(long long int i = 0; i<st1.size(); i++)
        {
            mp[st1[i]];
            if (mp[st1[i]] == 0)
            {
                st2.push_back(st1[i]);
                mp[st1[i]]++;
            }
        }


        sort(st2.begin(),st2.end());

        for (long long int  i = 0; i<st1.size(); i++)
        {
            for (long long int j = 0; j<st2.size(); j++)
            {
                if (st1[i] == st2[j])
                {
                    st3[i] = st2[st2.size() - j - 1];
                }
            }
        }
        cout<<st3<<endl;
    }

}
