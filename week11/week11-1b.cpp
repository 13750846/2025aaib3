// week11-1b.cpp 挑戰題(聰明方法)
// LeetCode 2154. Keep Multiplying Found Values by Two
// 每次乘2倍，把沒有出現的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;
        for(int num : nums)numsSet.insert(num);

        while(numsSet.find(original) !=numsSet.end() ){
            original = original * 2;
        }
        return original;
    }
};
