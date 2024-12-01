#include <bits/stdc++.h>
using namespace std;

bool canBeSorted(vector<int> &v) {
    vector<int> sorted_v = v;
    sort(sorted_v.begin(), sorted_v.end());

    vector<int> doubled_v = v;
    doubled_v.insert(doubled_v.end(), v.begin(), v.end()); // Concatenate v with itself

    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (vector<int>(doubled_v.begin() + i, doubled_v.begin() + i + n) == sorted_v) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        if (canBeSorted(v)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
