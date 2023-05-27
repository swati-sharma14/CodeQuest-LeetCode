class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0){
            return true;
        }
        stack<char> stack;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                stack.push(s[i]);
            }
            else{
                if(!stack.empty() && stack.top()=='(' && s[i]==')'){
                    stack.pop();
                }
                else if(!stack.empty() && stack.top()=='[' && s[i]==']'){
                    stack.pop();
                }
                else if(!stack.empty() && stack.top()=='{' && s[i]=='}'){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(!stack.empty()){
            return false;
        }
        return true;
    }
};
