class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int>rows(m,0);
        vector<int>cols(n,0);

        // First pass: mark rows and columns that contain a 0
        for(int i = 0 ; i < m ; i++){
            for(int j = 0; j < n ; j++){
                if(matrix[i][j]==0){
                  rows[i]=1;
                  cols[j]=1;
                }
            }
        }

        //Second pass: set cells to 0 if their row or column is marked
        for(int i = 0 ; i < m ;i++){
            for(int j = 0; j < n; j++){
                if(rows[i]==1 || cols[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};