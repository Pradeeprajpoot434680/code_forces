#include<iostream>
#include<string>
using namespace std;

int main() {
    string first;
    cin >> first;

    int c1 = 0, c2 = 0, c3 = 0;

    for(char c : first) {
        if(c == '1') c1++;
        else if(c == '2') c2++;
        else if(c == '3') c3++;
    }

    string temp = "";

    temp.append(c1, '1');
    temp.append(c2, '2');
    temp.append(c3, '3');

    string result = "";
    for (int i = 0; i < temp.size(); i++) {
        result += temp[i];
        if (i != temp.size() - 1) {
            result += "+";  
        }
    }

    cout << result;

    return 0;
}