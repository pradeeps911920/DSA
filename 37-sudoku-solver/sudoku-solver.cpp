class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char num) {

        for(int i = 0; i < 9; i++) {
            if(board[i][col] == num) {
                return false;
            }
        }

        for(int j = 0; j < 9; j++) {
            if(board[row][j] == num) {
                return false;
            }
        }

        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        for(int i = startRow; i < startRow + 3; i++) {
            for(int j = startCol; j < startCol + 3; j++) {

                if(board[i][j] == num) {
                    return false;
                }

            }
        }

        return true;
    }
    bool solver(vector<vector<char>>& board, int row , int col){
        if(row == 9){
            return true ;    //base case
        }
        if(col==9){
            return solver(board , row+1 , 0);
        }
        if(board[row][col]!='.'){
            return solver(board , row , col+1);
        }
        for(char i = '1' ; i <= '9' ; i++){
            if(isSafe(board , row , col, i )){
                board[row][col] = i;
                if(solver(board, row , col+1) ){
                    return true;
                } 
                board[row][col]='.';
                     
            }
            
        }
        return false;
        
    }
    void solveSudoku(vector<vector<char>>& board) {
        solver(board , 0 , 0 );
        
    }
};
// class Solution {
// public:
//     long long validint(vector<vector<char>>& board, int i, int j){
//         long long mask=0;
//         //row column
//         for(int x=0;x<9;x++){
//             if(board[x][j]!='.'){
//                 int v=board[x][j]-'0';
//                 mask=mask|(1<<v);
//             }
//             if(board[i][x]!='.'){
//                 int v=board[i][x]-'0';
//                 mask=mask|(1<<v);
//             }
//         }
//         //square
//         int r=i/3;
//         int c=j/3;
//         for(int a=0;a<3;a++){
//             for(int b=0;b<3;b++){
//                 int x=r*3+a;
//                 int y=c*3+b;
//                 if(!board[x][y]='.'){
//                     int v=board[x][y]-'0';
//                     mask=mask|(1<<v);
//                 }
//             }
//         }
//         return mask;

//     }
//     void solveSudoku(vector<vector<char>>& board) {
//         int n=board.size();
//         vector<vector<int>> bc(n,vector<int>(n,0));

        


//     }
// };