class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length()<26){
            return false;
        }
        vector<int> check(26,0);
        for(int i=0;i<sentence.length(); i++){
            int a = sentence[i];
            check[a-97]=1;
        }
        for(int i=0; i<26; i++){
            if(check[i]==0){
                return false;
            }
        }
        return true;
    }
};
