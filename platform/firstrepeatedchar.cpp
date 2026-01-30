// https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1

class Solution {
  public:
    string firstRepChar(string s) {
        vector<int>freq(26,0);
        for(int i= 0;i<s.length();i++) {
            freq[s[i]-'a']++;
            if(freq[s[i]-'a']==2) {
                return string(1,s[i]);
            }
        }
        return "-1";
    }
};
