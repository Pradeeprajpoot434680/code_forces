#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main() {
    int k,w;
   int n;
   cin>>k>>n>>w;
   int ans =0;
   int total_money_req = k*(w*(w+1)/2);
   cout<<( total_money_req - n >=0 ? total_money_req - n : 0);
   return 0;
}
