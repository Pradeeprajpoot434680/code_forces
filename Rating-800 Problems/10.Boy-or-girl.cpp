#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    
    string s;
    cin >> s;
    vector<int>count(26,0);
   

    for(char c : s) {
       count[c-'a']++;
    }

    int distChar = 0;
    for(int i=0; i<26; i++){
        if(count[i] > 0){
            distChar++;
        }
    }
    cout<< (distChar % 2 == 0? "CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}
