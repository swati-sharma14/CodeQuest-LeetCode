class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        queue<char> ans;
        for(int i=0;i<typed.size();i++){
            ans.push(typed[i]);
        }
        for(int i=0; i<name.size()-1; i++){
            char a = name[i]; //s
            char b = ans.front(); //s
            if(a!=b){
                return false;
            }
            ans.pop(); //pop
            char c = name[i+1]; //a
            if(a!=c){
                char d = ans.front();
                while(d==a){
                    ans.pop();
                    d = ans.front();
                }
            }
        }
        char a = name[name.size()-1];
        char b = ans.front();
        if(a!=b){
            return false;
        }
        else{
            ans.pop();
            while(!ans.empty()){
                char d = ans.front();
                if(d!=b){
                    return false;
                }
                ans.pop();
            }
            return true;
        }
    }
};
