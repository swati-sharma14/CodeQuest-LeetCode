class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0, max_count = 0, left = 0;
        map<char,int> check_map;
        for(int i=0; i<s.length(); i++){
            if(check_map[s[i]] == 0){
                count++;
                if(count > max_count){
                    max_count = count;
                }
                check_map[s[i]] += 1;
            }
            else{
                if(count > max_count){
                    max_count = count;
                }
                for(int j=left; j<i; j++){
                    if(s[j]==s[i]){
                        left = j+1;
                        break;
                    }
                    else{
                        count--;
                        check_map[s[j]] -= 1;
                    }
                }
            }
        }
        return max_count;
    }
};
