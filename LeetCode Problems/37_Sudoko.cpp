class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

    bool solve(vector<vector<char>>& board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){

                //Check if any blank spaces
                if(board[i][j] == '.'){
                //Check if valid value can be inserted
                    for(char c='1';c<='9'; c++){
                        if(isValid(board,i,j,c)){
                            board[i][j] = c;
                            if(solve(board) == true) return true;
                            else board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool isValid(vector<vector<char>>& board,int row,int col,char c){
        for(int i=0;i<9;i++){
            //Check if same value in column
            if(board[row][i] == c) return false;
            //Check if same value in row
            if(board[i][col] == c) return false;
            //Check if same value in [3x3] matrix 
            if(board[3*(row/3)+i/3][3*(col/3)+i%3] == c) return false;
        }
        return true;
    }
}