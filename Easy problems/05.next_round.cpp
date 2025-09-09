#include<iostream>
#include<vector>

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n, k;
    cin >> n >> k;  
    
    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];  
    }
    
    int kthPlaceScore = scores[k - 1];
    
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= kthPlaceScore && scores[i] > 0) {
            count++;
        }
    }
    
    
    cout<<count;
    return 0;
    
}