class Solution {
public:

    bool poss(vector<int>& weights, int days, int capacity){
        int current = 1, current_weight = 0;
        for(int i=0; i<weights.size(); i++){
            current_weight += weights[i];
            if(current_weight > capacity){
                current ++;
                current_weight = weights[i];
            }
        }
        if(current <= days){
            return true;
        }
        else{
            return false;
        }
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int max_capacity = INT_MIN, sum = 0;
        for(int i=0; i<weights.size(); i++){
            max_capacity = max(max_capacity, weights[i]);
            sum += weights[i];
        }

        int left = max_capacity, right = sum;
        int ans = 0;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(poss(weights,days, mid)){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
};
