class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map <string,int> ump;
        unordered_map <string,int> ump2;
        int cnt = 0;
        for(auto &it:words1)
            ump[it]++;
        for(auto &it:words2)
            ump2[it]++;
        if(words1.size() < words2.size())
            swap(words1,words2);
        for(auto &it:words2)
            if(ump[it] == 1 && ump2[it] == 1)
                cnt++;
        return cnt;
    }
};
