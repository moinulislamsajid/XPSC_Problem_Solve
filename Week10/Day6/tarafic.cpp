#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, point;
    cin >> x >> n;

    set<int> points = {0, x};
    multiset<int> lengths = {x};

    while (n--)
    {
        cin >> point;

        auto right = points.upper_bound(point);
        auto left = prev(right);

        lengths.erase(lengths.find(*right - *left));
        lengths.insert(point - *left);
        lengths.insert(*right - point);

        points.insert(point);

        cout << *lengths.rbegin() << " ";
    }

    return 0;
}
