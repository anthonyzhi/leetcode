class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>>rows(9);
        vector<set<char>>coloums(9);
        vector<set<char>>boxs(9);
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(rows[i].count(board[i][j])) return false;
                if(coloums[j].count(board[i][j])) return false;
                if(boxs[(i/3)*3+j/3].count(board[i][j])) return false;
                rows[i].insert(board[i][j]);
                coloums[j].insert(board[i][j]);
                boxs[(i/3)*3+j/3].insert(board[i][j]);
            }
        return true;
    }
};
