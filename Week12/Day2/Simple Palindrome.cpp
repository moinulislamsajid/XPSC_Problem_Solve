#include <bits/stdc++.h>
using namespace std;

const string V = "aeiou";

int main()
{


    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(5, n / 5);
        for (int i = 0; i < n % 5; i++)
        {
            v[i]++;
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < v[i]; j++)
            {
                cout << V[i];
            }
        }

        cout <<endl;
    }

    return 0;
}
