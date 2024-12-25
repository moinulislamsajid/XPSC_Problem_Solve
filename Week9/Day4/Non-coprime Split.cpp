#include<bits/stdc++.h>
using namespace std;

int divisor(int n)
{
    for (int i= 2; i<=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        bool flag = false;

        for (int i = l; i<= r; i++)
        {
            int md = divisor(i);
            if (md != i)
            {
                cout << md << " " << i - md << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
