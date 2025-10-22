// week07-2.cpp LeetCode 學習計畫 Simulation 第2題
// 657. Robot Return to Origin 學機器人走路
// 'U' up往上, 'D' down往下,'L' left往左,'R' right往右
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        // for(int i=0; i<moves.length(); i++){ 傳統的 for 迴圈
        //  char c = moves[i]; //取出字串里第i個字母
        for(char c : moves){ // C++進階迴圈
            if(c=='U'){
                y++;
            }else if (c=='D'){
                y--;
            }else if (c=='L'){
                x--;
            }else if (c=='R'){
                x++;
            }
        } //離開迴圈後
        if(x==0 && y==0) return true;
        else return false;
    }
};
