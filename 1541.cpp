class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(i<s.length()-1 && s[i+1]==')'){
                    if(st.empty()) count += 1;
                    else st.pop();
                    i++;
                }
                else if (st.empty()) count += 2;
                else {
                    count += 1;
                    st.pop();
                }
            }
        }
        return count + 2*st.size();
    }
};
