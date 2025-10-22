// week07-3.cpp LeetCode 學習計畫 Simulation 第1題
// 682. Baseball Game 計算點數
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op  : operations){
            //cout << "現在讀到了: " << op << "\n";
            if(op[0]=='C'){
                a.pop_back();
            } else if(op[0]=='D'){
                a.push_back(a.back()*2);
            } else if(op[0]=='+'){
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp+temp2);
            } else{
                a.push_back( stoi(op) );
            }
        }
        int ans = 0;
        for(int now: a){
            ans +=now;
        }
        // 先隨便 return 等一下再寫真答案
        return ans;
    }
};
