class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> check_map;
        for(int i=0; i<s.length(); i++){
            check_map[s[i]] += 1;
        }
        for(int i=0; i<t.length(); i++){
            if(check_map[t[i]]==0){
                return t[i];
            }
            check_map[t[i]] -= 1;
        }
        return 'a';
    }
};
