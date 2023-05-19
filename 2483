class Solution {
public:
    int bestClosingTime(string customers) {
        int min = customers.size();
        int penalty = 0;
        int hour = customers.size();
        for(int i=0; i<customers.size(); i++){
            if(customers[i]=='N'){
                penalty++;
            }
        }
        if(penalty == min){
            return 0;
        }
        for(int i=customers.size()-1; i>=0; i--){
            if(min >= penalty){
                min = penalty;
                hour = i+1;
            }
            if(customers[i]=='Y'){
                penalty++;
            }
            else{
                penalty--;
            }
            if(i==0){
                if(min>=penalty){
                    min = penalty;
                    hour = 0;
                }
            }
        }
        return hour;
    }
};

// 7
