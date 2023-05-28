class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> map;
        for(int i=0; i<s.length(); i++){
            if(map[s[i]]==1){
                return s[i];
            }
            map[s[i]]+=1;
        }
        return '0';
    }
};
