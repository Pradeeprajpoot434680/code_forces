#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;

    // Convert both strings to lowercase
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    if (first < second) {
        cout << "-1";
    } else if (first > second) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}

