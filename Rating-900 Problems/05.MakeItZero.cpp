
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n; i++)cin>>arr[i];
        
        if(n%2==0){
            cout << 2 << endl; // Output the number of operations

			cout << 1 << " " << n << endl; // Perform operation on the entire array

			cout << 1 << " " << n << endl; // Repeat the operation

        }
        else
        {
            
			cout << 4 << endl; // Output the number of operations

			cout << 1 << " " << n - 1 << endl; // Perform operation on the first n-1 elements

			cout << 1 << " " << n - 1 << endl; // Repeat the operation

			cout << n - 1 << " " << n << endl; // Perform operation on the last two elements

			cout << n - 1 << " " << n << endl;
        }
    }
    
    return 0;
}