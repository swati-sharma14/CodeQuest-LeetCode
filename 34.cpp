class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0){
            return {-1,-1};
        }
        int left = 0, right = nums.size(), index = -1;
        while(left<right){
            int mid = left + (right-left)/2;
            if(nums[mid]==target){
                index = mid;
                break;
            }
            else if(nums[mid]>target){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        cout << index << endl;
        if(index == -1){
            return {-1,-1};
        }
        if(index == 0){
            int right = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]!=target){
                    return {0,i-1};
                }
            }
            int b = nums.size()-1;
            return {0,b};
        }
        if(index == nums.size()-1){
            int left = nums.size()-1;
            int b = nums.size()-1;
            for(int i=nums.size()-1; i>=0; i--){
                if(nums[i]!=target){
                    return {i+1,b};
                }
            }
            return {0,left};
        }
        cout << "hi" << endl;
        left = index;
        while(left >= 0){
            if(nums[left]!=target){
                left++;
                break;
            }
            left--;
        }
        right = index;
        while(right <= nums.size()-1){
            if(nums[right] != target){
                right--;
                break;
            }
            right++;
        }
        if(left < 0){
            left = 0;
        }
        if(right > nums.size()-1){
            right = nums.size()-1;
        }
        return {left,right};
    }
};
