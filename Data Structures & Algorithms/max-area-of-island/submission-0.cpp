class Solution {
public:
    
    int max_area = 0;
    int area = 0;

    void dfs(vector<vector<int>>& grid, int i, int j) {

        if (grid[i][j] == 0) {
            return;
           
        }
        else { 
            grid[i][j] = 0;
            area++;
            
            if ((j+1) < grid[0].size()) {
                dfs(grid, i, j+1);
            }
            if ((i+1) < grid.size()) {
                dfs(grid, i+1, j);
            }
            if ((j-1) >= 0) {
                dfs(grid, i, j-1);
            }
            if ((i-1) >= 0) {
                dfs(grid, i-1, j);
            }
        }


    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     
        for (size_t i = 0; i < grid.size(); i++) {
            
            for (size_t j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    
                    dfs(grid, i, j);
                    
                    max_area = max(area, max_area);
                    area = 0;
                }
        }
    }
    return max_area;
    }

};
