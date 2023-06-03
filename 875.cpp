class Solution {
public:

    bool check(vector<int>& piles, int speed, int hour){
        long long time = 0;
        for(int i=0; i<piles.size(); i++){
            if(speed > piles[i]){
                time += 1;
            }
            else{
                if(piles[i]%speed == 0){
                    time += (piles[i]/speed);
                }
                else{
                    time += 1;
                    time += (piles[i]/speed);
                }
            }
        }
        if(time <= hour){
            return true;
        }
        else{
            return false;
        }
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int max_speed = 0, min_speed = 1;
        for(int i=0; i<piles.size(); i++){
            max_speed = std::max(max_speed, piles[i]);
        }
        long long ans = 0;
        int left = min_speed, right = max_speed;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(check(piles,mid,h)){
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
