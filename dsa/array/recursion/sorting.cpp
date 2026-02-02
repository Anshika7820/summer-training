#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size==1) return true;
    if(arr[0]>arr[1]) return false;
    isSorted(arr+1,size-1);
}

int main(){
    int a[5]={1,2,3,4,5};
    cout<<isSorted(a,5);
}