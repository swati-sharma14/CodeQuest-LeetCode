class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> num;
        
        for(int i=0; i<asteroids.size(); i++){
            if(asteroids[i]>0 || num.empty()){
                num.push(asteroids[i]);
            }
            else{
                while(!num.empty() && (num.top() > 0)&& (num.top() < abs(asteroids[i]))){
                    num.pop();
                }
                if(!num.empty() && num.top()==abs(asteroids[i])){
                    num.pop();
                }
                else{
                    if(num.empty() || num.top()<0){
                        num.push(asteroids[i]);
                    }
                }
            }
        }
        vector<int> ans(num.size(),0);
        int index = ans.size()-1;
        while(!num.empty()){
            ans[index] = num.top();
            index--;
            num.pop();
        }
        return ans;
    }
};
