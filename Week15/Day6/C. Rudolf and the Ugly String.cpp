#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    for (long long i = 0; i < t; i++) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        vector<long long> va;

        vector<string> substrings = {"mapie", "pie", "map"};

        for (long long j = 0; j < substrings.size(); j++) {
            string sul = substrings[j];
            size_t pos = 0;

            while (true) {
                pos = s.find(sul, pos);
                if (pos == string::npos) {
                    break;
                }

                long long mid_index = pos + sul.length() / 2;
                s[mid_index] = '?';
                va.push_back(mid_index);

                pos++;
            }
        }

        cout << va.size() << endl;
    }

    return 0;
}
