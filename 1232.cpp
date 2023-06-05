class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double x0 = coordinates[0][0];
        double y0 = coordinates[0][1];
        double x1 = coordinates[1][0];
        double y1 = coordinates[1][1];

        for (int i = 2; i < coordinates.size(); i++) {
            double xi = coordinates[i][0];
            double yi = coordinates[i][1];

            if ((y1 - y0) * (xi - x0) != (yi - y0) * (x1 - x0)) {
                return false;
            }
        }

        return true;
    }
};
