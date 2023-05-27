class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int a = strs[0].size(); 
        vector<vector<int>> bets;
        for(int i=0; i<strs.size(); i++){
            vector<int> in(a,0);
            for(int j=0; j<a; j++){
                in[j] = (int)strs[i][j];
            }
            bets.push_back(in);
        }
        bool incr = false;

        int total = 0;
        for(int i=0; i<a; i++){
            int k = 0; 
            while(k < strs.size()-1){
                if(bets[k][i] > bets[k+1][i]){
                    incr = true;
                }
                k++;
            }
            total+=incr;
            incr = false;
        }
        return total;
    }
};
