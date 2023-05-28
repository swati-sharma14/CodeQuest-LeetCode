class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> map;
        for(int i=0; i<magazine.length(); i++){
            map[magazine[i]]+=1;
        }
        for(int i=0; i<ransomNote.length(); i++){
            if(map[ransomNote[i]]==0){
                return false;
            }
            map[ransomNote[i]]-=1;
        }
        return true;
    }
};
