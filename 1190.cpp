class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string a;
        for(int i=0; i<s.size(); i++){
            if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    a += st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
                for(int i=0; i<a.size(); i++){
                    st.push(a[i]);
                }
                a.erase();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
