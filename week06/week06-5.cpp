// week06-5.cpp 今天的LeetCode挑戰題
// LeetCode 3350. Adjacent Increasing Subarrays Detection II
// 題目跟昨天的3349很像，昨天問你k今天問你最大可能k
//3349用combo，今天3350用兩個combo左到右、右到左，累積多少
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();
        vector<int> left(N,1);
        vector<int> right(N,1);
        for(int i=1; i<N; i++){
            if( nums[i-1] < nums[i] ) left[i]= left[i-1] + 1;
        }
        for(int i=N-2; i>=0; i--){
            if( nums[i] < nums[i+1] ) right[i] = right[i+1] + 1;
        }
        int ans=0;
        for(int i=0; i<N-1; i++){
            int now = min(left[i],right[i+1]);
            if(now>ans) ans=now;
        }
        return ans;
    }
};
