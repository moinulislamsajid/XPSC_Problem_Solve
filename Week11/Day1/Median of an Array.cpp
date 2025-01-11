#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int p = (n + 1) / 2 - 1;
    int res = count(a.begin() + p, a.end(), a[p]);
    cout << res << "\n";
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
