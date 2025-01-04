#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> towers;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto it = upper_bound(towers.begin(), towers.end(), x);
        if (it == towers.end())
        {
            towers.push_back(x);
        }
        else
        {
            *it = x;
        }
    }

    cout << towers.size() << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}


