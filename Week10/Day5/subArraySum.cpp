#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int N;
    ll X, a, cnt = 0, pre = 0;
    map<ll, int> freq;

    cin >> N >> X;
    freq[0] = 1;

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        pre += a;
        cnt += freq[pre - X];
        freq[pre]++;
    }

    cout << cnt << endl;
    return 0;
}
