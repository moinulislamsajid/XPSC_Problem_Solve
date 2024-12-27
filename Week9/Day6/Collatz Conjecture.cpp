#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    while (k > 0 && x != 1)
    {
        ll ost = (x / y + 1) * y - x;
        ost = max(1ll, ost);
        ost = min(ost, k);
        x += ost;
        while (x % y == 0)
        {
            x /= y;
        }
        k -= ost;
    }
    cout << x + k % (y - 1) << endl;
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
