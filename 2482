class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> rowone(grid.size());
        vector<int> colone(grid[0].size());
        for(int i=0; i<grid.size(); i++){
            int sum = 0;
            for(int j=0; j<grid[0].size(); j++){
                sum+=grid[i][j];
            }
            rowone[i] = sum;
        }
        for(int i=0; i<grid[0].size(); i++){
            int sum = 0;
            for(int j=0; j<grid.size(); j++){
                sum+=grid[j][i];
            }
            colone[i] = sum;
        }
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                grid[i][j] = (rowone[i] + colone[j] -(grid[0].size() - rowone[i] + grid.size() - colone[j]));
            }
        }
        return grid;
    }
};
