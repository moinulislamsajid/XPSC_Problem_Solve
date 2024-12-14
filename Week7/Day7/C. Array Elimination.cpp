#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> a(n), bit(33, 0);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for (int j=0; j<32; j++)
    {
        for (int i=0; i<n; i++)
        {
            if (a[i] & (1 << j))
            {
                bit[j]++;
            }
        }
    }

    vector<int> res;

    for (int i = 1; i <= n; i++)
    {
        bool flag = true;
        for (int j = 0; j < 32; j++)
        {
            if (bit[j] % i != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            res.push_back(i);
        }
    }

    sort(res.begin(), res.end());
    for (auto& x : res)
    {
        cout << x << " ";
    }
    cout <<endl;



}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
