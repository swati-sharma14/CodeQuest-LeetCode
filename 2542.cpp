class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> mixed;
        for(int i=0; i<nums1.size(); i++){
            mixed.push_back({nums2[i], nums1[i]});
        }
        sort(mixed.rbegin(), mixed.rend());
        long long ans = 0, currSum = 0;

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i=0; i<k-1; i++){
            pq.push(mixed[i][1]);
            currSum += mixed[i][1];
        }
        
        for(int i = k-1; i<nums1.size(); i++){
            currSum += mixed[i][1];
            pq.push(mixed[i][1]);
            ans = max(ans , (currSum*(mixed[i][0])));

            currSum -= pq.top();
            pq.pop();
        }

        return ans;
    }
};
