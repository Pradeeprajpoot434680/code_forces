#include<iostream>
#include<string>
#include<vector>

using namespace std;



int main() {
   int n;
   int ans =0;
   if(n%5==0)ans = n/5;
   else ans = n/5 + 1;
   cout<<ans;
   return 0;
}