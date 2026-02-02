#include<iostream>
using namespace std;
void printstr(string str, int n){
    if(n == 0) return;
    cout << str << endl;
    printstr(str, n-1);
}

int main(){
    string str = "I love Recursion";
    int n;
    cin >> n;
    printstr(str, n);
}
