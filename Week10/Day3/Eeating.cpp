#include <bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), pre(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(), a.rend());
        for (int i=1; i<=n; i++)
        {
            pre[i] = pre[i - 1] + a[i - 1];
        }
        for (int i=0; i<q; i++)
        {
            int k, ans = -1;
            cin >> k;
            auto it = lower_bound(pre.begin(), pre.end(), k);
            if (it != pre.end())
            {
                ans = it - pre.begin();
            }
            cout << ans << endl;
        }
    }
    return 0;
}
