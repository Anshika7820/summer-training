#include<iostream>
using namespace std;
 void printeven(int n){
     if(n==0) return;
     printeven(n-1); 
     if(n%2==0){
     cout<<n<<" ";
     }
 }
int main(){
     printeven(9); 
}