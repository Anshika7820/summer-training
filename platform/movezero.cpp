//  https://leetcode.com/problems/move-zeroes/?difficulty=EASY&page=1

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        int x=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[x]);
                x++;
            }
        }
    }
};



//using the term insertion sort for this---

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 1; i < n; i++) {
            if (nums[i] != 0) {
                int x = nums[i];
                int j = i - 1;
                while (j >= 0 && nums[j] == 0) {
                    nums[j + 1] = nums[j];
                    j--;
                }
                nums[j + 1] = x;
            }
        }
    }
};
