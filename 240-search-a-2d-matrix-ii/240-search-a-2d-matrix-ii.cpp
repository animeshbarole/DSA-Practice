class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i = 0;
        int j = matrix[0].size()-1;
        
        while((i>=0&&i<matrix.size())&&(j>=0&&j<matrix[0].size()))
        {
            int mid = matrix[i][j];
            
            if(mid==target)
            {
                return true;
            }
            else if(mid>target)
            {
                j--;
            }
            else 
            {
                i++;
            }
        }
        
        return false;
    }
};