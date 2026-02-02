//given statement of n steps and u can either climb 1 or 2 steps at a given time.the task is to return the count of distinct ways to climb to the top.
//Note: teh order of steps taken matters
//ex: input=3
// output=3;
// explanation:
// there are three distinct ways of climbing a staircase of step 3:
//[1,1,1],[2,1]and [1,2]


#include<iostream>
using namespace std;

int climbingstairs(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;

    return climbingstairs(n-1) + climbingstairs(n-2);
}

int main(){
    cout << climbingstairs(4);
}

