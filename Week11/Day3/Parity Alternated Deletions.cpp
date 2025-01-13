#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, l1, l2, sum, x;

    while (cin >> n)
    {
        vector<int> odd, even;

        for (i = 0; i < n; i++)
        {
            cin >> k;
            if (k & 1) odd.push_back(k);
            else even.push_back(k);
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        l1 = even.size();
        l2 = odd.size();

        if (l1 == l2 || abs(l1 - l2) == 1)
        {
            cout << 0;
        }
        else
        {
            sum = 0;
            if (l1 > l2)
            {
                x = l1 - l2 - 2;
                for (i = 0; i <= x; i++) 
                {
                    sum += even[i];
                }
            }
            else
            {
                x = l2 - l1 - 2;
                for (i = 0; i <= x; i++) 
                {
                    sum += odd[i];
                }
            }
            cout << sum;
        }

        cout << endl;
    }

    return 0;
}

