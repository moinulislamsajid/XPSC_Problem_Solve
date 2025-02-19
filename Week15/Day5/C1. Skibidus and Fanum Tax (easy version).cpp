#include <bits/stdc++.h>
using namespace std;

const long long INF = 1E18 + 16;

void solve()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> va(n), vb(m);
    for (long long &i : va)
    {
        cin >> i;
    }
    for (long long &i : vb)
    {
        cin >> i;
    }
    sort(vb.begin(), vb.end());
    va.insert(va.begin(), -INF);
    n++;

    for (long long i = 1; i < n; i++)
    {
        auto it = lower_bound(vb.begin(), vb.end(), -15, [&](long long a, long long _)
        {
            assert(_ == -15);
            return a - va[i] < va[i - 1];
        });
        if (it == vb.end())
        {
            continue;
        }
        long long j = *it;
        if (va[i] < va[i - 1] && j - va[i] < va[i - 1])
        {
            continue;
        }
        va[i] = min((va[i] < va[i - 1] ? INF : va[i]), (j - va[i] < va[i - 1] ? INF : j - va[i]));
    }

    cout << (is_sorted(va.begin(), va.end()) ? "YES" : "NO") << '\n';
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    long long t;
    cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}
