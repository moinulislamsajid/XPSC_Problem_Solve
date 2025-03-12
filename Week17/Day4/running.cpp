#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void solve()
{
    int n;

    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] * 2 >= b[i] && b[i] * 2 >= a[i])
        {
            ans++;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;

    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
