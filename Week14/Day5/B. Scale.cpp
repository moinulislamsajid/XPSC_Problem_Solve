#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        char ch[n][n];

        for (auto &row : ch)
        {
            for (char &c : row)
            {
                 cin >> c;
            }
        }



        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {
                cout <<ch[i][j];
            }
            cout <<endl;
        }
    }
}
