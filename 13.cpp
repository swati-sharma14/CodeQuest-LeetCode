class Solution {
public:

    int value(char s){
        if(s=='I'){
            return 1;
        }
        else if(s=='V'){
            return 5;
        }
        else if(s=='X'){
            return 10;
        }
        else if(s=='L'){
            return 50;
        }
        else if(s=='C'){
            return 100;
        }
        else if(s=='D'){
            return 500;
        }
        else if(s=='M'){
            return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {
        int count = 0;
        count+=value(s[0]);
        for(int i=1;i<s.length();i++){
            count+=value(s[i]);
            if(s[i]=='V' && s[i-1]=='I'  || (s[i]=='X' && s[i-1]=='I')){
                count-=2;
            }
            else if(s[i]=='L' && s[i-1]=='X' ||(s[i]=='C' && s[i-1]=='X')){
                count-=20;
            }
            else if(s[i]=='D' && s[i-1]=='C' ||(s[i]=='M' && s[i-1]=='C')){
                count-=200;
            }
        }
        return count;
    }
};
