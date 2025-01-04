#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, rnd, tst = 0, tmp, tmp2;
    vector<int> ara(10001);

    while (true)
    {
        fill(ara.begin(), ara.end(), 0);

        cin >> num >> rnd;
        if (num == 0 && rnd == 0) break;

        for (int i = 0; i < num; i++)
        {
            cin >> tmp;
            ara[tmp]++;
        }

        cout << "CASE# " << ++tst << ":" << endl;
        for (int i = 0; i < rnd; i++)
        {
            cin >> tmp2;
            if (ara[tmp2] > 0)
            {
                int cnt = 1;
                for (int j = 1; j < tmp2; j++)
                {
                    cnt += ara[j];
                }
                cout << tmp2 << " found at " << cnt << endl;
            }
            else
            {
                cout << tmp2 << " not found" << endl;
            }
        }
    }

    return 0;
}

