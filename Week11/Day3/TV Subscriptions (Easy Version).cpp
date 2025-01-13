#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> d(a);
    for (int i = 0; i < a; i++)
    {
        cin >> d[i];
    }

    map<int, int> e;
    int f = 0, g = 0;

    for (int i = 0; i < c; i++)
    {
        if (e[d[i]] == 0)
        {
            f++;
        }
        e[d[i]]++;
    }
    g = f;

    for (int i = c; i < a; i++)
    {
        e[d[i - c]]--;
        if (e[d[i - c]] == 0)
        {
            f--;
        }
        if (e[d[i]] == 0)
        {
            f++;
        }
        e[d[i]]++;
        g = min(g, f);
    }

    cout << g << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
    

    return 0;
}

