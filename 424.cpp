class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s.length() == 0){
            return 0;
        }
        vector<int> arr(128,0);
        int count = 0, max_count = 0;
        for (int i=0; i<s.size(); i++) {
            max_count = max(max_count, ++arr[s[i]]);
            if (i - count + 1 - max_count > k){      
                arr[s[count++]]--;
            }
        }
        return s.length() - count;
    }
};
