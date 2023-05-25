class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> map;
        int a = 0;
        for(int i=0; i<order.length(); i++){
            map[order[i]] = a;
            a++;
        }
        for(int i=0; i<words.size()-1; i++){
            string a = words[i];
            string b = words[i+1];
            int ba = min(a.length(), b.length());
            int k = 0;
            for(int j=0; j<ba; j++){
                if(map[a[j]] == map[b[j]]){
                    k++;
                    continue;
                }
                else if(map[a[j]] > map[b[j]]){
                    return false;
                }
                else{
                    break;
                }
            }
            if(k==ba && (b.length() < a.length())){
                return false;
            }
        }
        return true;
    }
};
