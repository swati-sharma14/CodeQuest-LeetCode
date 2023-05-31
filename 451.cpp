class Solution {
public:
    string frequencySort(string s) {
        map<char,int> map;
        for(int i=0; i<s.length(); i++){
            map[s[i]]+=1;
        }

        vector<pair<int, char>> count;
        for(auto& x:map){
            count.push_back({x.second,x.first});
        }
        sort(count.rbegin(), count.rend());
        string a;
        for(int i=0; i<count.size(); i++){
            int frequency = count[i].first;
            for(int j=0; j<frequency; j++){
                a += count[i].second;
            }
        }
        return a;
    }
};
