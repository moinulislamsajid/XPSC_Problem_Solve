#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m), cnt(k + 1, 0), c(4, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }
    for (int e : a)
    {
        if (e <= k) cnt[e] |= 1;
    }
    for (int e : b)
    {
        if (e <= k) cnt[e] |= 2;
    }
    for (int e : cnt)
    {
        c[e] += 1;
    }
    if (c[1] > k / 2 || c[2] > k / 2 || c[1] + c[2] + c[3] != k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

