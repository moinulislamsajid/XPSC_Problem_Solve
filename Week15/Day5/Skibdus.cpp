#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m;
    cin >> n >> m;
    vector<vector<long long>> ve(n, vector<long long>(m));

    for (long long i=0; i<n; i++)
    {
        for (long long j=0; j<m; j++)
        {
            cin>>ve[i][j];
        }
    }

    vector<long long> vsum(n, 0);
    for (long long i=0; i<n; i++)
    {
        for (long long j=0; j<m; j++)
        {
            vsum[i] += ve[i][j];
        }
    }

    vector<long long> th(n);
    iota(th.begin(), th.end(), 0);
    sort(th.begin(), th.end(), [&](long long a, long long b)
    {
        return vsum[a] > vsum[b];
    });

    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        ans += vsum[th[i]] * (n - 1 - i) * m;
    }

    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<m; j++)
        {
            ans+=ve[i][j] * (m - j);
        }
    }

    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
