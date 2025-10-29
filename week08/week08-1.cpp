// week08-1.cpp LeetCode挑戰題
// 3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N = 0;
        while(n>0){
            n = n/2;
            N++;
        }
        cout << "現在發現 n 是幾位數呢? " << N << "位數\n";
        int ans = 0;
        for(int i=0; i<N; i++){
            ans = ans*2+1;
        }
        return ans;
    }
};
