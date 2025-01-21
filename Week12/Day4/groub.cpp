#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(5));
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<5; j++)
            {
                cin>>a[i][j];
            }
        }

        bool ans = false;
        for (int j=0; j<5; j++)
        {
            for (int k=0; k<5; k++)
            {
                if (j!=k)
                {
                    int cnt1 = 0, cnt2 = 0, cntno = 0;
                    for (int z=0; z<n; z++)
                    {
                        if (a[z][j] == 1)
                        {
                            cnt1++;
                        }
                        if (a[z][k] == 1)
                        {
                            cnt2++;
                        }
                        if (a[z][j] == 0 && a[z][k] == 0)
                        {
                            cntno++;
                        }
                    }
                    if (cnt1 >= n / 2 && cnt2 >= n / 2 && cntno == 0)
                    {
                        ans = true;
                    }
                }
            }
        }
        if (ans)
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

