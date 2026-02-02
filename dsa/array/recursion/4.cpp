#include<iostream>
using namespace std;
int calpower(int x,int n){
    if(n == 0){
        return 1;
    }
    return x*calpower(x,n-1);
}
int main(){
    cout << calpower(5,4);
}

