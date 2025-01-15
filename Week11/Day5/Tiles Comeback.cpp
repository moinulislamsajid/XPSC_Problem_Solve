#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int a, b;
    cin >> a >> b;
    vector<int> c(a);
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }

    int d = 0, e = 0, f = 0, g = a - 1;
    int h = b, i = b;

    if (c[0] == c[a - 1])
    {
        h = b / 2;
        i = b - h;
    }

    while (f < a)
    {
        if (d >= h)
        {
            break;
        }
        if (c[f] == c[0])
        {
            d++;
        }
        f++;
    }

    while (g >= 0)
    {
        if (e >= i)
        {
            break;
        }
        if (c[g] == c[a - 1])
        {
            e++;
        }
        g--;
    }

    if ((f - 1) < (g + 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int a;
    cin >> a;
    while (a > 0)
    {
        a--;
        if (solve())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
