// week08-3b.cpp LeetCode學習計畫 Simulation
// 1275. Find Winner on a Tic  Tac Toe Game
// 看起來像3x3陣列
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};
        int now = 1;
        int winner = 0;
        for(vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now; //a[i][j]=1;
            // myPrint(a);
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now;
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now;
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now;
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now;
            if(now==1) now = 2;
            else now = 1;
        }
       if(winner==1) return "A";
       else if(winner==2)return "B";
       else if(moves.size()==9) return "Draw";
       else return"Pending";
    }
};
