#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // Check if the lengths of the strings are equal
    if (s.size() != t.size()) {
        cout << "NO";
        return 0;
    }

    // Compare each character in s with the reversed character in t
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] != t[n - i - 1]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}