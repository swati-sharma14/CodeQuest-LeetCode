class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> check_map;
        map<string, char> checkmap;
        string name;
        int count = 0, total = 0;
        int left = 0;
        while (count < pattern.size()) {
            while (left < s.size() && s[left] != ' ') {
                name += s[left];
                left++;
            }
            left++;
            if (checkmap.find(name) != checkmap.end() && checkmap[name] != pattern[count]) {
                return false;
            }
            if (check_map.find(pattern[count]) == check_map.end()) {
                checkmap[name] = pattern[count];
                check_map[pattern[count]] = name;
            }
            else {
                if (check_map[pattern[count]] != name) {
                    return false;
                }
            }
            name = "";
            count++;
        }
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' '){
                total++;
            }
        }
        if(pattern.size() - 1 != total){
            return false;
        }
        return true;
    }
};

