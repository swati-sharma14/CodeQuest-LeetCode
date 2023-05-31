class Solution {
public:
    string largestOddNumber(string num) {
        long long number = -1;
        for(long long i=num.length()-1; i>=0; i--){
            long long a = num[i] - '0';
            if(a%2!=0){
                number = i;
                break;
            }
        }
        if(number == -1){
            return "";
        }
        vector<int> ans;
        for(long long i=0; i<=number; i++){
            long long b = num[i] - '0';
            ans.push_back(b);
        }
        string answer;
        for(int i=0; i<ans.size(); i++){
            answer += to_string(ans[i]);
        }
        return answer;
    }
};
