#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll x;
    cin >> x;
    vector<ll> v;

    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ll p = 1;
            while (x % i == 0)
            {
                x /= i;
                p *= i;
            }
            v.push_back(p);
        }
    }
    if (x > 1) v.push_back(x);

    ll ansA = LLONG_MAX, ansB = LLONG_MAX;
    int n = v.size();

    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll a = 1, b = 1;
        for (int j = 0; j < n; j++)
        {
            if (mask & (1 << j)) a *= v[j];
            else b *= v[j];
        }
        if (max(a, b) < max(ansA, ansB))
        {
            ansA = a;
            ansB = b;
        }
    }

    cout << ansA << " " << ansB << endl;
}
