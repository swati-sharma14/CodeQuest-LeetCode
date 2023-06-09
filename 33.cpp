class Solution {
public:

    int bin_search(vector<vector<int>>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid][0]==target){
                return nums[mid][1];
            }
            else if(nums[mid][0]>target){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        vector<vector<int>> answer(nums.size(),{0,0});
        for(int i=0; i<nums.size(); i++){
            answer[i] = {nums[i],i};
        }
        sort(answer.begin(), answer.end());
        return bin_search(answer,target);
    }
};
