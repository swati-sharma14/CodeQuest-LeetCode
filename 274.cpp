class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        if(citations.size()==1){
            return !(citations[0]==0);
        }
        if(citations[0] >= citations.size()){
            return citations.size();
        }
        for(int i=0; i<citations.size(); i++){
            int ans = citations.size() - i;
            if(citations[i] >= ans){
                return ans;
            }
        }
        return 0;
    }
};
