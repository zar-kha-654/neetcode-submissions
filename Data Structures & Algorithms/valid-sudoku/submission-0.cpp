class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check rows
        for(int i= 0; i<9; i++){
            unordered_set<char>seen;
            for(int j= 0; j<9; j++){
                char cell = board[i][j];
                if(cell =='.'){
                    continue;
                }
                if (seen.count(cell)){
                    return false;
                }
                seen.insert(cell);
            }
        }
        //check coloumns
        for(int j= 0; j<9; j++){
            unordered_set<char>seen;
            for(int i= 0; i<9; i++){
                char cell = board[i][j];
                if(cell =='.'){
                    continue;
                }
                if (seen.count(cell)){
                    return false;
                }
                seen.insert(cell);
            }
        }
       //check 3*3 boxes
        for(int boxRow=0; boxRow<3; boxRow++){
            for(int boxCol=0; boxCol<3; boxCol++){
                unordered_set<char>seen;
                int startRow = boxRow * 3;
                int startCol = boxCol * 3;

                for(int i= 0; i<3; i++){
                    for(int j= 0; j<3; j++){
                        char cell = board[startRow+i][startCol+j];
                        if(cell =='.'){
                            continue;
                        }
                        if (seen.count(cell)){
                            return false;
                        }
                        seen.insert(cell);
                    }
                } 
                    }
                }
        return true;
 
    }
};
