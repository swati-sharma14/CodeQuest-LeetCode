class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> s_char;
        for(int i=0; i<s.length(); i++){
            s_char[s[i]] += 1;
        }

        string a;
        for(int i=0; i<order.length(); i++){
            int frequency = s_char[order[i]];
            for(int j=0; j<frequency; j++){
                a += order[i];
            }
            s_char[order[i]] = 0;
        }

        for(auto& x:s_char){
            int freq = x.second;
            if(freq != 0){
                for(int i=0; i<freq; i++){
                    a += x.first;
                }
            }
        }
        return a;
    }
};
