#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    string y;
    cin >> y;

    vector<int> v, v1, v2, v3;
    for (int i = 0; i < x; i++)
    {
        if (y[i] == 'N') v.push_back(i);
        else if (y[i] == 'S') v1.push_back(i);
        else if (y[i] == 'W') v2.push_back(i);
        else if (y[i] == 'E') v3.push_back(i);
    }

    vector<char> z(x, ' ');
    auto f = [&](vector<int> &a, vector<int> &b, char c, char d)
    {
        int i = 0;
        for (; i < min(a.size(), b.size()); i++)
        {
            z[a[i]] = (i % 2 == 0) ? c : d;
            z[b[i]] = z[a[i]];
        }
        for (; i < max(a.size(), b.size()); i += 2)
        {
            if (i + 1 >= a.size() && i + 1 >= b.size())
            {
                cout << "NO" << endl;
                return false;
            }
            if (i < a.size() && i + 1 < a.size())
            {
                z[a[i]] = c;
                z[a[i + 1]] = d;
            }
            else if (i < b.size() && i + 1 < b.size())
            {
                z[b[i]] = c;
                z[b[i + 1]] = d;
            }
        }
        return true;
    };

    if (!f(v, v1, 'R', 'H') || !f(v2, v3, 'H', 'R')) return;

    int p = count(z.begin(), z.end(), 'R');
    int q = count(z.begin(), z.end(), 'H');
    if (p == 0 || q == 0)
    {
        cout << "NO" << endl;
        return;
    }

    for (char c : z) cout << c;
    cout << endl;
}

int main()
{


    int x;
    cin >> x;
    while (x--) solve();
}
