// week03-4a.cpp 第1種寫法
// LeeCode 學習計畫第6題 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=0) ans.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            if(i<ans.size()) nums[i] = ans[i];
            else nums[i]=0;
        }
    }
};
