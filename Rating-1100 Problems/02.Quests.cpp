#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) { 
        int n;
        cin >> n;
        int k;
        cin >> k;
        
        vector<int> ai(n);
        vector<int> bi(n);
        for(int i=0; i<n; i++){
            cin>>ai[i];
        }
        for(int j=0; j<n; j++){
            cin>>bi[j];
        }
        

        int maxExp = 0;
        int maxi=0;
        int sum=0;
        
        for(int i=0; i<min(n,k); i++){
            sum+=ai[i];
            maxi = max(maxi,bi[i]);
            maxExp = max(maxExp,sum+(k-i-1)*maxi);
        }
        
        
        cout << maxExp << endl;
    }
    return 0;
}
