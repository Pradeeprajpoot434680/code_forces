#include <iostream>
#include <vector>
#include<algorithm>
#include <cmath>
using namespace std;
vector<vector<long long>>ans;
// Function to check if a number is of the form 1 + 10^k
bool isPowerOfTenMinusOne(long long x) {
    // x should be of the form 1 + 10^k
    x -= 1; // now check if x is a power of 10
    // Check if x is a power of 10 (i.e., 1, 10, 100, ...)
    return (x > 0 && (x % 10 == 0)) && (log10(x) == floor(log10(x)));
}

// Function to find all divisors of n
vector<long long> findDivisors(long long n) {
    vector<long long> divisors;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

// Solve for each test case
void solve(long long n) {
    vector<long long> divisors = findDivisors(n);
    vector<long long> result;

    for (long long x : divisors) {
        long long quotient = n / x;
        if (isPowerOfTenMinusOne(quotient)) {
            result.push_back(x);
        }
    }

    if (result.empty()) {
        ans.push_back({0});
    } else {
        vector<long long >temp;
        for (long long x : result) {
           temp.push_back(x);
        }
        sort(temp.begin(),temp.end());
        ans.push_back(temp);
       
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        solve(n);
    }
    for(int i=0; i<ans.size(); i++){
        int s = ans[i].size();
        if(s>1){
            cout<<s<<endl;
        }
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
