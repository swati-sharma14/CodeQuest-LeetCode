class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        map<char,int> map;
        for(int i=0; i<s.length(); i++){
            map[s[i]]+=1;
        }
        for(int i=0; i<t.length(); i++){
            map[t[i]]-=1;
        }
        for(auto& x:map){
            ans += (abs(x.second));
        }
        return ans/2;
    }
};
