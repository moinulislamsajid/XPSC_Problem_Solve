#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int y, z;
        cin >> y >> z;
        vector<int> arr(y);
        for (auto& num : arr)
        {
            cin >> num;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int current_sum = 0;
        for (auto& num : arr)
        {
            if (current_sum + num <= z)
            {
                current_sum += num;


            }
            else
            {

                  break;
            }

        }
        cout << z - current_sum << '\n';
    }
    return 0;
}

