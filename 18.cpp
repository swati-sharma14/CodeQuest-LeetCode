class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long Target = (long long)target - (long long)nums[i] - (long long)nums[j];
                int left = j+1, right = nums.size()-1;
                while(left<right){
                    if(nums[left] + nums[right] > Target){
                        right--;
                    }
                    else if(nums[left] + nums[right] < Target){
                        left++;
                    }
                    else{
                        set.insert({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                    }
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};
