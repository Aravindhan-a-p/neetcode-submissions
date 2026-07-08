class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //three hash arrays
        int row[9][9] = {0}; //row[2][4] indicates if value 4 is there at row 2
        int col[9][9] = {0};
        int box[9][9] = {0};

        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                if(board[r][c] == '.') continue;
                //check if value exists before in row, col or box
                int boxIndex = (r/3)*3 + (c/3);
                int val = board[r][c] - '1'; //converting chars 1-9 to index 0-8
                if( row[r][val] || col[c][val] || box[boxIndex][val] ) return false;
                
                row[r][val] = 1;
                col[c][val] = 1;
                box[boxIndex][val] = 1;
            }
        }
        return true;
    }
};
