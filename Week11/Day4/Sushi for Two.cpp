#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a;

    vector<long long> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }

    vector<long long> c;
    long long cnt = 1;

    for (int i = 1; i < a; i++)
    {
        if (v[i] == v[i - 1])
        {
            cnt++;
        }
        else
        {
            c.push_back(cnt);
            cnt = 1;
        }
    }
    c.push_back(cnt);

    long long ans = 0;
    for (int i = 1; i < c.size(); i++)
    {
        ans = max(ans, 2 * min(c[i], c[i - 1]));
    }

    cout << ans << endl;
}
