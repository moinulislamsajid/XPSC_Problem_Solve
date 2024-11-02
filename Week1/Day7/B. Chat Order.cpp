#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    set<string> st;
    vector<string> ans;

    for (int i = n - 1; i >= 0; i--) {
        if (st.find(v[i]) == st.end()) {
            st.insert(v[i]);
            ans.push_back(v[i]);
        }
    }

    //reverse(ans.begin(), ans.end());

    for (const string& str : ans) {
        cout << str << endl;
    }

    return 0;
}
