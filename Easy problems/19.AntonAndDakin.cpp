#include<iostream>
using namespace std;

int main() {
    int n;
    string s; 
    cin >> n;
    cin>>s;
    
    int a = 0,b = 0;
    
    for(char ch : s) {
        
        if(ch == 'A') {
            a++;
        }
        else
        {
            b++;
        }
    }
    
   if(a>b){
       cout<<"Anton";
   }
   else  if(a<b){
       cout<<"Danik";
   }else
   {
       cout<<"Friendship";
   }
    return 0;
}
