#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n < 2)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = v[0];

        for (int i = 1; i < n; i++)
        {
            ans &= v[i];
        }

        cout << ans << endl;
    }

    return 0;
}
