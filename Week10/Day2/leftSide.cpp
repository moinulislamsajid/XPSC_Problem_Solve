#include <bits/stdc++.h>
using namespace std;

int main()
{


    int a, b;
    cin >> a >> b;
    vector<int> c(a);
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < b; i++)
    {
        int v, d = 0, e = a - 1, f = -1, g;
        cin >> v;
        while (d <= e)
        {
            g = (d + e) / 2;
            if (v >= c[g])
            {
                f = g;
                d = g + 1;
            }
            else
            {
                e = g - 1;
            }
        }
        cout << f + 1 << '\n';
    }
    return 0;
}

