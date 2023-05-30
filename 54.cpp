class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size();
        if (rows == 0) return ans;
        int cols = matrix[0].size();

        int total = rows * cols;
        int cnt = 0;
        
        int startRow = 0;
        int startCol = 0;
        int endRow = rows - 1;
        int endCol = cols - 1;

        while (cnt < total) {
            // Traverse top row
            for (int col = startCol; col <= endCol && cnt < total; col++) {
                ans.push_back(matrix[startRow][col]);
                cnt++;
            }
            startRow++;

            // Traverse right column
            for (int row = startRow; row <= endRow && cnt < total; row++) {
                ans.push_back(matrix[row][endCol]);
                cnt++;
            }
            endCol--;

            // Traverse bottom row
            for (int col = endCol; col >= startCol && cnt < total; col--) {
                ans.push_back(matrix[endRow][col]);
                cnt++;
            }
            endRow--;

            // Traverse left column
            for (int row = endRow; row >= startRow && cnt < total; row--) {
                ans.push_back(matrix[row][startCol]);
                cnt++;
            }
            startCol++;
        }

        return ans;
    }
};
