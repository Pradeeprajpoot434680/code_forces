#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int len = s.size();
        if(len>10){
            string temp="";
            temp.push_back(s[0]);                
            int num = len - 2;                      
           temp += to_string(num);     
            temp.push_back(s[len-1]);               
            cout<<temp<<endl;                       
        }
        else {
            cout<<s<<endl;                        
        }
    }
    return 0;
}