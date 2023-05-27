class Solution {
public:
    string removeOuterParentheses(string s) {
        string s1;
        int count = 0;
        stack<char> stack;
        for(int i=0; i<s.length(); i++){
            if(stack.empty()){
                stack.push('(');
            }
            else if(stack.size()==1 && s[i]==')' && count==0){
                stack.pop();
            }
            else{
                if(s[i] == '('){
                    count++;
                }
                else{
                    count--;
                }
                s1+=s[i];
            }
        }
        return s1;
    }
};
