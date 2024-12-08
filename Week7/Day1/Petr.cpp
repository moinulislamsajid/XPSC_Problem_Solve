#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >>n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool ok = false;
    for (int i = 0; i< (1 << n); i++)
    {
        int sum = 0;
        for (int k = 0; k<n; k++)
        {
            if ((i >> k) & 1)
            {
                sum += a[k];
            }
            else
            {
                sum -= a[k];
            }
        }

        if (sum % 360 == 0)
        {
            ok = true;
            break;
        }
    }

    if (ok)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }

    return 0;
}
