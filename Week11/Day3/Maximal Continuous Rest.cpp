#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int result = 0;
    int len = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (a[i % n] == 1)
        {
            len++;
            result = max(result, len);
        }
        else
        {
            len = 0;
        }
    }
    cout << result << endl;
}

