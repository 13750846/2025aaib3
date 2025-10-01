// week04-4.cpp
// LeeCode 學習計畫第10題 896. Monotonic Array
// 只有增加or只有減少的陣列不可以又有增又有減
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0,down=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]<nums[i])up=1;
            if(nums[i-1]>nums[i])down=1;
        }
        if(up==1 && down==1) return false;
        return true;
    }
};
