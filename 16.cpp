class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int answer = target, diff = INT_MAX;

        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            int a = nums[i];
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                if(a + nums[j] + nums[k] == target){
                    return target;
                }
                else if(a + nums[j] + nums[k] > target){
                    if((abs(a + nums[j] + nums[k] - target))  < abs(diff)){
                        diff = a + nums[j] + nums[k] - target;
                    }
                    k--;
                }
                else{
                    if((abs(a + nums[j] + nums[k] - target))  < abs(diff)){
                        diff = a + nums[j] + nums[k] - target;
                    }
                    j++;
                }
            }
        }
        return answer + diff;
    }
};
