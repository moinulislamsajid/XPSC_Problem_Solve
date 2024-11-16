#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;

        vector<vector<int>> board(n, vector<int>(m));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>board[i][j];
            }
        }

        vector<int> v(n + m, 0);
        vector<int> v1(n + m, 0);

        for(int i=0; i<n; i++)
        {
            for(int j =0; j<m; j++)
            {
                v[i - j + m] += board[i][j];
                v1[i + j] += board[i][j];
            }
        }

        int sum = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int csum = v[i - j + m] + v1[i + j] - board[i][j];
                sum = max(sum, csum);
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}
