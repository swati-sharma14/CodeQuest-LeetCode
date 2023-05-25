class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        map<vector<int>, int> map;
        for(int i=0; i<nums.size(); i++){
            int a = nums[i];
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                if(a + nums[j] + nums[k] == 0){
                    vector<int> happy = {a,nums[j],nums[k]};
                    sort(happy.begin(), happy.end());
                    map[happy] = 1;
                    j++;
                    k--;
                }
                else if(a + nums[j] + nums[k] > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        for(auto& x:map){
            answer.push_back(x.first);
        }
        return answer;
    }
};
// -4 -1 -1 0 1 2 
