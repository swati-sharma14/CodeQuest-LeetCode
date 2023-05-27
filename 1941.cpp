class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> map;
        for(int i=0; i<s.length(); i++){
            map[s[i]]++;
        }
        int a=map[s[0]];
        for(auto& x:map){
            if(x.second!=a){
                return false;
            }
        }
        return true;
    }
};
