#include <iostream>
using namespace std;
int findsum(int arr[],int size){
    if(size==0) return 0;
    return arr[0]+findsum(arr+1,size-1);
}
int main(){
    int a[5] = {1,2,3,4,5};
    cout<<findsum(a, 5);
}
    