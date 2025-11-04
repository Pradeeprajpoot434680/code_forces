#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) { 
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> count(26, 0);
        int distinct = 0;
        int ans = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (count[s[i] - 'a'] == 0) {
                distinct++;
            }
            count[s[i] - 'a']++;
            ans += distinct;
        }
        
        cout << ans << endl;
    }
    return 0;
}
