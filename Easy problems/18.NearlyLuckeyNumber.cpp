#include<iostream>
using namespace std;

int main() {
    string n; 
    cin >> n;  
    
    int lucky_count = 0;
    
    for(char digit : n) {
        if(digit == '4' || digit == '7') {
            lucky_count++;
        }
    }
    
    string lucky_count_str = to_string(lucky_count);
    
    for(char digit : lucky_count_str) {
        if(digit != '4' && digit != '7') {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}

