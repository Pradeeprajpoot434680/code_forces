#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0; i<n; i++){
        int p, v, t;
        cin >> p >> v >> t; 
           int sum =0;
           sum = p+v+t;
           if(sum>=2){
               count++;
           }
    }
    
    cout<<count;
    return 0;
}