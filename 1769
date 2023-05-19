 class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.length(),0);
        for(int i=0 ;i<boxes.length(); i++){
            int a = 0;
            for(int j=0; j<boxes.length(); j++){
                int k = abs(j-i);
                int l = boxes[j] - 48;
               a+=(k*l);
            }
            ans[i] = a;
        }
        return ans;
    }
};
