#include <bits/stdc++.h>
using namespace std;

const int maxN = 5000;

int N, X, v, r;
pair<int, int> a[maxN];

int main()
{
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> v;
        a[i] = make_pair(v, i + 1);
    }

    sort(a, a + N);
    for (int i = 0; i < N; i++)
    {
        v = X - a[i].first;
        r = N - 1;
        for (int l = i + 1; l < r; l++)
        {
            while (l + 1 < r && a[l].first + a[r].first > v)

                r--;
            if (a[l].first + a[r].first == v)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}

