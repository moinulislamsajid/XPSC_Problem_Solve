#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;

int power(int x, int n)
{
    int ans = 1 % N;
    while (n)
    {
        if (n & 1)
        {
            ans = (1LL * ans % N * x % N) % N;
        }
        x = 1LL * x * x % N;
        n >>= 1;
    }

    return ans;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        cout << power(x, n) <<endl;
    }
    return 0;
}
