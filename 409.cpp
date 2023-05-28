class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mappy;
        for(int i=0; i<s.length(); i++){
            mappy[s[i]]+=1;
        }
        int count = 0;
        int once = 0;
        for(auto& x:mappy){
            if(x.second%2==1 && once==0){
                count+=1;
                once=1;
            }
            count += 2*(x.second/2);
        }
        
        return count;
    }
};
