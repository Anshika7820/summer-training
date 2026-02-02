// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/?difficulty=EASY&page=1


class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        int x=0;
        int y=n-1;
        while(x<y){
        if(arr[x]+arr[y]==target){
            return {x+1,y+1};
           }
           else if(arr[x]+arr[y]<target){
            x++;
            }else{
                y--;
            }
        }
        return {};
    }
};