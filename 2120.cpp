class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> ans(s.length());
        for(int i=0; i<s.length(); i++){
            int x = startPos[1];
            int y = startPos[0];
            int count = 0;
            for(int j=i; j<s.length(); j++){
                if(s[j] == 'R'){
                    if(x==(n-1)){
                        break;
                    }
                    else{
                        x++;
                    }
                }
                else if(s[j] == 'L'){
                    if(x==0){
                        break;
                    }
                    else{
                        x--;
                    }
                }
                else if(s[j] == 'U'){
                    if(y==0){
                        break;
                    }
                    else{
                        y--;
                    }
                }
                else if(s[j] == 'D'){
                    if(y==n-1){
                        break;
                    }
                    else{
                        y++;
                    }
                }
                count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};
