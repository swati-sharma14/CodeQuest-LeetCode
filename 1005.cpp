class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0 && l<k){
                nums[i] = (-1) * nums[i];
                l++;
            }
        }
        for(int i=0; i<nums.size(); i++){
            cout << nums[i] << " " << endl;
        }
        cout << l << " " << k << " " << endl;
        if(l<k){
            sort(nums.begin(),nums.end());
            if((k-l)%2 != 0){
                nums[0] = (-1) * nums[0];
            }
        }
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
};
