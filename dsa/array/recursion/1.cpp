#include<iostream>
using namespace std;

 void printrecursion(int n){
     if(n==0) return;
    cout<<n<<" ";
    printrecursion(n-1);
  
     
 }
int main(){
    int n;
    cin>>n;
    printrecursion(n);
}