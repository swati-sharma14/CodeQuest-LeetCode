class Solution {
public:
    string makeGood(string s) {
        if(s.length()==0){
            return "";
        }
        stack<char> sta;
        sta.push(s[0]);
        int i=1;
        while(i<s.length()){
            if(sta.empty()){
                sta.push(s[i]);
            }
            else if(s[i]>='a'){
                if(!sta.empty() && (sta.top() - 'A')== (s[i] - 'a')){
                    sta.pop();
                }
                else{
                    sta.push(s[i]);
                }
            }
            else if(s[i]<='Z'){
                if((sta.top() - 'a')== (s[i] - 'A')){
                    sta.pop();
                }
                else{
                    sta.push(s[i]);
                }
            }
            else{
                sta.push(s[i]);
            }
            i++;
        }
        string s1;
        vector<char> mem;
        while(!sta.empty()){
            mem.push_back(sta.top());
            sta.pop();
        }
        for(int i=mem.size()-1; i>=0; i--){
            s1 += mem[i];
        }
        return s1;
    }
};
