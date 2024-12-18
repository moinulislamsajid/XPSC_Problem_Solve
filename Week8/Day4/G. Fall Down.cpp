#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin >> n >> m;
    char ch[n + 7][m + 7];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ch[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        int l = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (ch[i][j] == 'o')
            {
                l = i - 1;
            }
            else if (ch[i][j] == '*')
            {
                swap(ch[i][j], ch[l][j]);
                l--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ch[i][j];
        }
        cout << endl;
    }
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
