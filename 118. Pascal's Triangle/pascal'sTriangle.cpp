class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        if(numRows==0) return triangle;
        triangle.push_back(vector<int>{1});
        if(numRows==1) return triangle;
        triangle.push_back(vector<int>{1,1});
        if(numRows==2) return triangle;
        for(int i=3;i<=numRows;i++){
            vector<int> temp=triangle.back(),subTriangle{1};
            for(int j=0;j<temp.size()-1;j++)
                subTriangle.push_back(temp[j]+temp[j+1]);
            subTriangle.push_back(1);
            triangle.push_back(subTriangle);
        }
        return triangle;
    }
};
