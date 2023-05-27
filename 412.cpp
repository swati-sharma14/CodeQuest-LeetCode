class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> str(n,"1");
        for(int i=0; i<n ;i++){
            if((i+1)%15==0){
                str[i]="FizzBuzz";
            }
            else if((i+1)%3==0){
                str[i]="Fizz";
            }
            else if((i+1)%5==0){
                str[i]="Buzz";
            }
            else{
                string s = to_string(i+1);
                str[i]=s;
            }
        }
        return str;
    }
};
