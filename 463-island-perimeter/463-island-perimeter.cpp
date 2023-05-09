class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int repeate = 0;
        int count = 0;
        
        for(int i = 0;i<grid.size();i++)
        {
            for(int j = 0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                    
                    if(i!=0&&grid[i-1][j]==1)
                    {
                        repeate++;
                    }
                    
                    if(j!=0&&grid[i][j-1]==1)
                    {
                        repeate++;
                    }
                }
            }
        }
        
        return 4*count-2*repeate;
    }
};