class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool flag = true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[i-1]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            sort(nums.begin(), nums.end());
            return; 
        }

       
        int lastIndex = nums.size()-1;
        while(nums[lastIndex-1] >= nums[lastIndex])
            lastIndex --;
        lastIndex --;
        
        int mid = 101, midIdx = lastIndex;
        for(int i=lastIndex+1; i<nums.size(); i++){
            if(nums[i] <= mid && nums[i] > nums[lastIndex]){
                mid = nums[i];
                midIdx = i;
            }
        }
        swap(nums[lastIndex], nums[midIdx]);
        
        for(int i=lastIndex+1, j=nums.size()-1; i<j; i++, j--)
            if(nums[i] > nums[j]) swap(nums[i], nums[j]);
            }
};

// 7 6 5 3 2 4 1
