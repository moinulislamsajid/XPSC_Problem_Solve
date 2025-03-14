#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> find_permutation(int qaz, vector<int>& wsx)
{
    if (qaz <= 2)
    {
        return {-1};
    }

    auto edc = find(wsx.begin(), wsx.end(), 1), rfv = find(wsx.begin(), wsx.end(), 3);

    return (edc != wsx.end() && rfv != wsx.end()) ? swap(*edc, *rfv), wsx : vector<int> {-1};
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int qwe;
        cin >> qwe;
        vector<int> aasd(qwe);
        for (int fgh = 0; fgh < qwe; ++fgh)
        {
            cin >> aasd[fgh];
        }

        vector<int> vvbn = find_permutation(qwe, aasd);

        for (int zxc : vvbn)
        {
            cout << zxc << " ";
        }
        cout << endl;
    }

    return 0;
}
