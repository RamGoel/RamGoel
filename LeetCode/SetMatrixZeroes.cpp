//Memory Address Error

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<matrix[0].size();k++){
                        matrix[i][k]=9999;
                        matrix[k][j]=9999;
                    }
                }
            }
        }
        
        
        for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                if(matrix[i][j]==9999){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
