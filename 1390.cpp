class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans  = 0;
        for(int j=0; j<nums.size(); j++){
            int check = 0;
            int count = 0;
            int total = 0;
            int a = pow(nums[j],0.5);
            cout << a << endl;
            for(int i=1; i<=a; i++){
                if(nums[j]%i==0){
                    total+=i;
                    if(nums[j]/i == i){
                        count++;
                    }
                    else{
                        total+=(nums[j]/i);
                        count+=2;
                    }
                    if(count>4){
                        check = 1;
                        break;
                    }
                }
            }
            if(check==0 && count==4){
                ans+=total;
            }
        }
        return ans;
    }
};
