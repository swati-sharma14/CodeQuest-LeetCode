class Solution {
public:
    int countGoodSubstrings(string s) {
        int val = 0;
        if(s.length()<3){
            return val;
        }
        unordered_map<int,char> map;
        int a = 1;
        map[s[0]]+=1;
        map[s[1]]+=1;
        map[s[2]]+=1;
        for(auto& x:map){
            if(x.second>1){
                a = 0;
                break;
            }
        }
        val+=a;
        for(int i=3; i<s.length(); i++){
            a = 1;
            map[s[i-3]]-=1;
            map[s[i]]+=1;
            for(auto& x:map){
                if(x.second>1){
                    a = 0;
                    break;
                }
            }
            val+=a;
        }
        return val;
    }
};
