#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, tot = 0, ans = INT_MAX;
    cin >> n;

    vector<long long int> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        tot+= arr[i];
    }
    for (long long i = 0; i < (1 << n); i++)
    {
        long long s = 0;
        for (long long j = 0; j < n; j++)
        {
            if (i & (1 << j)) s += arr[j];
        }
        long  long curr = abs((tot - s) - s);
        ans = min(ans, curr);
    }
    cout << ans;
    return 0;
}
