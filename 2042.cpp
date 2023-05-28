class Solution {
public:
    bool areNumbersAscending(string s) {
        int a = -1;
        int i = 0;
        while(i<s.length()){
            int b = 0;
            if(s[i]>=48 && s[i]<=57){
                if(i!=s.length()-1){
                    if(s[i+1]==32){
                        b = ((int)s[i] - 48);
                    }
                    else{
                        b = ((10*((int)s[i]-48)) + ((int)s[i+1] - 48));
                        i++;
                    }
                }
                else{
                    b = ((int)s[i] - 48);
                }
                if(b<=a){
                    return false;
                }
                a = b;
            }
            i++;
        }
        return true;
    }
};
