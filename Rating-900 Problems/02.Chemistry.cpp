#include<iostream>
#include<string>
#include<vector>
using namespace  std;

void worker(int n,int k,string s){
    vector<int>count(26,0);
    for(int i=0; i<n; i++){
        count[s[i]-'a']++;
    }
    int even=0;
    int odd=0;
    for(int i:count){
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    if(k >= odd){
       cout<<"YES";
       return;
    }

    odd = odd - k;

    if(odd % 2 == 0){
        cout<<"NO";
        return;
    }
    cout<<"YES";

}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        worker(n,k,s);
    }
}