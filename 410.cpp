class Solution {
public:

    bool done(vector<int>& nums, int max_sum, int k){
        int count = 1, sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum > max_sum){
                count++;
                sum = nums[i];
            }
            if(count > k){
                return false;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int sum = 0, maximum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            maximum = max(maximum, nums[i]);
        }
        int left = maximum, right = sum;
        while(left < right){
            int mid = left + (right-left)/2;
            if(done(nums,mid,k)){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};
