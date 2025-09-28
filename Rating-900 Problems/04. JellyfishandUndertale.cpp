#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void solve(int a,int b,vector<int>arr){
    int seconds=0;
    for(int i=0; i<arr.size(); i++){
        while(b>1){
            seconds++;
            b--;
        }
        b = min(a,b+arr[i]);
        b--;
        seconds++;
    }
    cout<<seconds<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,c;
        cin>>a>>b>>c;

        vector<int>arr(c);
        for(int j=0; j<c; j++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        solve(a,b,arr);
    }
}