#include<iostream>
using namespace std;
#include<string>

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int ans =0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x > k){
            ans+=2;
        }
        else{
            ans+=1;
        }
    }
    cout<<ans;
}