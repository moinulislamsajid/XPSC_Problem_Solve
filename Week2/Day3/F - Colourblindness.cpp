#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<vector<char>> grid(2, vector<char>(n));

        for(int i = 0; i<2; i++)
        {
            for (int j= 0; j<n; j++)
            {
                cin >> grid[i][j];

                if (grid[i][j] == 'B')
                {
                    grid[i][j] = 'G';
                }
            }
        }

        bool flag = true;
        for (int i= 0; i<n; i++)
        {
            if (grid[0][i] != grid[1][i])
            {
                flag = false;
                break;
            }
        }


        if (flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;n
        }
    }

}
