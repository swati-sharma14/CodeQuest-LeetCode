class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> map1;
        for(int i=0; i<word1.size(); i++){
            map1[word1[i]]+=1;
        }
        for(int i=0; i<word2.size(); i++){
            map1[word2[i]]-=1;
        }
        for(auto& x:map1){
            if(x.second>3 || x.second<-3){
                return false;
            }
        }
        return true;
    }
};
