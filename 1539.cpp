class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing(arr.size(),0);
        missing[0] = arr[0] - 1;
        if(missing[0]>=k){
            return k;
        }
        for(int i=1; i<arr.size(); i++){
            missing[i] = (arr[i] - arr[i-1]) + missing[i-1] - 1;
            if(missing[i] >= k){
                return (arr[i-1] +(k-missing[i-1]));
            }
        }
        return arr[arr.size()-1] + (k-missing[arr.size()-1]);
    }
};
