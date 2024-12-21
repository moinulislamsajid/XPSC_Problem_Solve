#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll cal(vector<int>& a)
{
    ll z = 0, ans = 0;
    for(int i = a.size() - 1; i >= 0; i--)
    {
        if(a[i] == 0)
        {
            z++;
        }
        else
        {
            ans += z;
        }
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }


    ll ans = cal(a);

    for(int i=0; i<n; i++)
    {
        if(a[i] == 0)
        {
            a[i] = 1;
            ans = max(ans, cal(a));
            a[i] = 0;
            break;
        }
    }
    for(int i = n - 1; i >= 0; --i)
    {
        if(a[i] == 1)
        {
            a[i] = 0;
            ans = max(ans, cal(a));
            a[i] = 1;
            break;
        }
    }
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
