#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main() {
    int lower=0,upper=0;
    string s;
    cin>>s;
    for(char ch:s){
        if(ch <= 'Z' && ch >='A'){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper > lower){
        for(int i=0; i<s.size(); i++){
            if(s[i] <='z' && s[i]>='a'){
                s[i] = s[i]-32;
            }
        }
    }else
    {
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] + 32;
            }
        }
    }
    
    cout<<s;
   return 0;

}