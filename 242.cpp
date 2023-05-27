class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        for(int i=0; i<s.length(); i++){
            map[s[i]]+=1;
        }
        for(int i=0; i<t.length(); i++){
            map[t[i]]-=1;
        }
        bool ans = true;
        for(auto& x:map){
            cout << x.first << " " << x.second << endl;
            if(x.second!=0){
                ans = false;
            }
        }
        return ans;
    }
};
