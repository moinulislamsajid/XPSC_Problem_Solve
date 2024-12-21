#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        // Alternate between 'b' and 'a' in a repeating "bba" pattern
        if (i % 3 == 0 || i % 3 == 1) {
            cout << 'b'; // Positions 0, 1 -> 'b'
        } else {
            cout << 'a'; // Position 2 -> 'a'
        }
    }
    cout << endl; // End with a newline
    return 0;
}
