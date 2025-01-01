#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v;
    v.push_back(0);
    vector<int> pre;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(v.back()+x);
        if(i == 0)
        {
            pre.push_back(x);
        }
        else
        {
            pre.push_back(max(pre.back(), x));
        }
    }
    for(int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        int ind = upper_bound(pre.begin(), pre.end(), k)-pre.begin();
        cout << v[ind] << " ";
    }
    cout << endl;
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
