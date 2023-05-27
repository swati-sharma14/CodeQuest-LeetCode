class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> map;
        for(int i=0; i<stones.size(); i++){
            map[stones[i]]+=1;
        }
        int sum = 0;
        for(int i=0; i<jewels.size(); i++){
            sum += map[jewels[i]];
        }
        return sum;
    }
};
