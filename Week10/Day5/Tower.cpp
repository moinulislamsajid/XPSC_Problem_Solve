#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int maxN = 2e5 + 5;

int N, K, x[maxN];
map<int, int> freq;
ll ans;

int main()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> x[i];
    }


    int uni = 0, r = 0;
    for (int l = 1; l <= N; l++)
    {
        while (r < N && (freq[x[r + 1]] >= 1 || uni < K))
        {
            r++;
            freq[x[r]]++;
            if (freq[x[r]] == 1)
                uni++;
        }

        ans += (r - l + 1);

        freq[x[l]]--;
        if (freq[x[l]] == 0)
        {
             uni--;
        }

    }

    cout << ans <<endl;
    return 0;
}
