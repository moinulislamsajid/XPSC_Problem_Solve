#include <bits/stdc++.h>
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


        long long int sum = 0;
        for (int i=0; i<n; i++)
        {
            sum+= v[i];
        }

        long long int cur = 0;
        long long int ans = 1;
        for (int i = 0; i < n - 1; i++)
        {
            cur += v[i];
            sum -= v[i];
            ans = max(ans, __gcd(sum, cur));
        }
        cout<<ans<<endl;
    }
}
