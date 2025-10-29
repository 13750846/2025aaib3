// week08-3a.cpp LeetCode學習計畫 Simulation
// 1275. Find Winner on a Tic  Tac Toe Game
// 看起來像3x3陣列,所以開 int a[3][3]={}陣列 再用 myPrint 印出來
class Solution {
public:
    void myPrint(int a[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << a[i][j] << " ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};
        int now = 1;
        for(vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now; //a[i][j]=1;
            myPrint(a);
            if(now==1)now = 2;
            else now = 1;
        }
        return "A";
    }
};
