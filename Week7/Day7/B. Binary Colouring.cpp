#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve()
{
    ll n;
    cin>>n;
    vector<int> v(31, 0);
    for(int i=0; i<30; i++)
    {
        if (1ll & (n >> i))
        {
            if (v[i])
            {
                v[i + 1] = 1;
                v[i] = 0;
            }
            else if (i > 0)
            {
                if (v[i - 1] == 1)
                {
                    v[i + 1] = 1;
                    v[i - 1] = -1;
                }
                else
                {
                    v[i] = 1;
                }
            }
            else if (i == 0)
            {
                v[i] = 1;
            }
        }
    }
    cout<<31<<endl;
    for (int i =0; i<=30; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
