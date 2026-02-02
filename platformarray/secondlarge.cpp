class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int large = -1, seclar = -1;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > large) {
                seclar = large;
                large = arr[i];
            }
            else if(arr[i] < large && arr[i] > seclar) {
                seclar = arr[i];
            }
        }
        return seclar;
    }
};
