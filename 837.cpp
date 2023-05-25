class Solution {
public:
    double new21Game(int n, int k, int m) {
        //  minimum score required to win the game (k) is 0
        // if the maximum possible score (n) is greater than or equal to the sum of k and m
        if(k==0 || (n >= k+m)){
            return 1.0;
        }
        double currSum = 1.0; // cumulative probability of reaching the current score
        double answer = 0.0; // final probability of winning the game

        vector<double> dp(n+1);
        dp[0] = 1.0; // 100% chance of reaching a score of 0 

        for(int i=1; i<n+1; i++){
            dp[i] = currSum/m;
            if(i<k){
                currSum += dp[i];
            }
            else{
                answer += dp[i];
            }

            if(i>=m){
                currSum -= dp[i-m];
            }
        }

        return answer;
    }
};
