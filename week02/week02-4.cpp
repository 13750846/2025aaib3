//week02-4.cpp LeetCode 學習計畫第2題
// 389. Find the Difference找到2個字串差哪個字母
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; // 可以用桶子來裝字母，大括號，代表一開始空的
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            A[c]++;
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--;
            if(A[c] < 0) return c;
        }
        return 0;
    }
};
