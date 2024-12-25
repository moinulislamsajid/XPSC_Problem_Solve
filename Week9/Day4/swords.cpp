#include<bits/stdc++.h>
#define ll long long int

using namespace std;
const int N = 200000 + 13;

int n, a[N];

int gcd(int a, int b)
{
    while (b != 0)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    cin >> n;
    ll sum = 0;
    int ma = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        ma = max(ma, a[i]);
    }

    int g = 0;
    for (int i = 0; i < n; i++)
    {
        g = gcd(g, ma - a[i]);
    }

    ll ans = (ma * 1LL * n - sum) / g;
    cout << ans << ' ' << g << endl;

    return 0;
}
