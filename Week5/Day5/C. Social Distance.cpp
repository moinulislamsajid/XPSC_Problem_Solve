#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int res=1,c=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (i - c <= k)
                {
                     res--;
                }

                c = i;
            }
            else if (i-c>k)
            {
                c = i;
                res++;
            }
        }
        cout<<res<< endl;
    }
}
