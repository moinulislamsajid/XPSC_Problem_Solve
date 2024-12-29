#include <bits/stdc++.h>
using namespace std;

const int maxN = 200000;


int main()
{
    int N, x, l = 0, sum = 0, cnt = 0;

    vector<int> a(maxN+1);

    cin >> N >> x;
    for (int r = 1; r <= N; r++)
    {
        cin >> a[r];
        sum += a[r];
        while (sum > x)
        {
            sum -= a[l++];
        }
        if (sum == x)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

