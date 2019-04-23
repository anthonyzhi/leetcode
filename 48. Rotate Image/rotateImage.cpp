class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int start =0,end=matrix.size()-1;
        while(start<end){
            for(int i=0;i<end-start;i++){
                int temp=matrix[start][start+i];
                matrix[start][start+i]=matrix[end-i][start];
                matrix[end-i][start]=matrix[end][end-i];
                matrix[end][end-i]=matrix[start+i][end];
                matrix[start+i][end]=temp;
            }
            start++;end--;
        }        
    }
};
