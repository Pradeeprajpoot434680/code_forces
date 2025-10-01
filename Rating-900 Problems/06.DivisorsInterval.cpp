#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n;
        cin>>n;
        int j=1;
        while(n%i == 0){
            i++;
        }
        cout<< j-1<<endl;
    }
    return 0;
}