#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        long long n, k;
        cin >> n >> k;

        long long first_leaf_year = n - k + 1;

        long long sum_of_leaves = k * (first_leaf_year + n) / 2;

        if (sum_of_leaves % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
