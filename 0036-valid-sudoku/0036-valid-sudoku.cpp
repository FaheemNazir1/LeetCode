class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == '.'){
                    continue;
                }

                char num = board[i][j];

                //rows
               for(int k = 0; k < n; k++) {
                    if(k != j && board[i][k] == num)
                        return false;
                }


                
                //cols
                for(int k=0; k<n;k++){
                    if(k!=i && board[k][j]==num){
                        return false;
                    }
                }
                //  grid
                int row = (i / 3) * 3;
                int col = (j / 3) * 3;
                for(int r = row; r < row + 3; r++) {
                    for(int c = col; c < col + 3; c++) {
                        if((r != i || c != j) && board[r][c] == num)
                            return false;
                    }
                }
            }
        }
        return true;
    }
};