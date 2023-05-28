class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> map1;
        map<char, char> mappy;
        for(int i=0; i<s.length(); i++){
            if(map1.find(s[i]) == map1.end() && mappy.find(t[i])==mappy.end()){
                map1[s[i]] = t[i];
                mappy[t[i]] = s[i];
                s[i] = t[i];
            }
            else{
                if(map1[s[i]]!=t[i]){
                    return false;
                }
                if(mappy.find(t[i]) == mappy.end()){

                }
                else if(s[i]!=mappy[t[i]]){
                    return false;
                }
                map1[s[i]] = t[i];
                s[i] = t[i];
            }
        }
        if(t==s){
            return true;
        }
        return false;
    }
};
