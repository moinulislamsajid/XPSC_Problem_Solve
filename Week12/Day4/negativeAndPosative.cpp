#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        long long sum = 0;
        int ng = 0;
        for(int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if(v[i] < 0)
            {
                ng++;
                v[i] = -v[i];
            }
            sum += v[i];
        }
        sort(v.begin(), v.end());
        if(ng & 1)
        {
            sum -= 2 * v[0];
        }
        cout << sum << endl;
    }
}
