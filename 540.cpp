class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int j=1;
        while(j<nums.size()){
            if(nums[j]==nums[j-1]){
                j+=2;
            }
            else if(nums[j]!=nums[j-1]){
                return nums[j-1];
            }
        }
        return nums[nums.size()-1];
    }
};
