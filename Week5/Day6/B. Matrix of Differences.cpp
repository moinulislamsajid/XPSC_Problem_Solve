#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a=1, b=n*n;
        vector<int> v;
        for (int i = 1; i<=n*n; i++)
        {
            if (i % 2 == 1)
            {
                v.push_back(a);
                a++;
            }
            else
            {
                v.push_back(b);
                b--;
            }
        }
        a = 0;
        for (int i=1; i<=n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j=a; j<a+n; j++)
                {
                    cout<<v[j]<<" ";
                }
                cout<<endl;
                a+=n;
            }
            else
            {
                for (int j = (n + a) - 1; j>= a; j--)
                {
                    cout<<v[j]<<" ";
                }
                cout<<endl;
                a+=n;
            }
        }
    }
}
