class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int k = (n + 1) / 2;

        vector<int> ar1(nums.begin(), nums.begin() + k);
        vector<int> ar2(nums.begin() + k, nums.end());
        reverse(ar1.begin(), ar1.end());
        reverse(ar2.begin(), ar2.end());

        int i1 = 0, i2 = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                nums[i] = ar1[i1++];
            } else {
                nums[i] = ar2[i2++];
            }
        }
    }
};

// 1 4 3 4 2 3 2 3 1 3 1 3 1

// 1 1 1 1 2 2 3 3 3 3 3 4 4
