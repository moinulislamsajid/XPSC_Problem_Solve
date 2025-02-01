#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i <n; i++)
        {
            cin >> a[i];
        }

        int maxVal = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > maxVal)
            {
                maxVal = a[i];
            }
        }

        cout<<maxVal + a[n - 1]<<endl;
    }

    return 0;
}

