class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long max_sum = INT_MIN, currSum = 0;
        
        for(int i=0; i<nums.size(); i++){
            currSum += nums[i];
            if(max_sum < currSum){
                max_sum = currSum;
            }
            if(currSum < 0){
                currSum = 0;
            }
        }
        return max_sum;
    }
};
