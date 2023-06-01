class Solution {
public:
    bool uniqueOccurrences(vector<int> & arr) {
        map<int,int> first_map;
        for(int i=0; i<arr.size(); i++){
            first_map[arr[i]] += 1;
        }
        map<int,int> second_map;

        for(auto &x:first_map){
            if(second_map[x.second] != 0){
                return false;
            }
            second_map[x.second] += 1;
        }
        return true;
    }
};
