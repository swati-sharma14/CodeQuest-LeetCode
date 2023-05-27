class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        int min = 201;
        for(int i=0; i<strs.size(); i++){
            if(min>strs[i].length()){
                min = strs[i].length();
            }
        }
        if(min==0){
            return s;
        }
        for(int i=0; i<min; i++){
            int b = 1;
            char a = strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(strs[j][i]!=a){
                    b = 0;
                }
            }
            if(b){
                s+=a;
            }
            else{
                break;
            }
        }
        return s;
    }
};
