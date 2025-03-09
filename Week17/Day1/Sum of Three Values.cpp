#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            long long sum = arr[i].first + arr[left].first + arr[right].first;
            if (sum == x) {
                cout << arr[i].second << " " << arr[left].second << " " << arr[right].second << endl;
                return 0;
            }
            if (sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
