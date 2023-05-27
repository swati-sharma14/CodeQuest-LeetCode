class Solution {
public:
    string reformatNumber(string number) {
        string s;
        for(int i=0; i<number.size(); i++){
            if(number[i]=='-' || number[i]==' '){
            }
            else{
                s+=number[i];
            }
        }
        for(int i=0; i<s.length(); i++){
            cout << s[i];
        }
        string ans;
        if(s.length()%3==1){
            for(int i=0; i<s.length()-4; i+=3){
                ans+=s[i];
                ans+=s[i+1];
                ans+=s[i+2];
                ans+='-';
            }
            int a = s.length()-4;
            ans+=s[a];
            ans+=s[a+1];
            ans+='-';
            ans+=s[a+2];
            ans+=s[a+3];
        }
        else if(s.length()%3==2){
            for(int i=0; i<s.length()-2; i+=3){
                ans+=s[i];
                ans+=s[i+1];
                ans+=s[i+2];
                ans+='-';
            }
            int a = s.length()-2;
            ans+=s[a];
            ans+=s[a+1];
        }
        else{
            for(int i=0; i<s.length()-3; i+=3){
                ans+=s[i];
                ans+=s[i+1];
                ans+=s[i+2];
                ans+='-';
            }
            int a = s.length()-3;
            ans+=s[a];
            ans+=s[a+1];
            ans+=s[a+2];
        }
        return ans;
    }
};
