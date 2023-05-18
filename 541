class Solution {
public:
    string reverseStr(string s, int k) {
        int j = 2*k;
        string ans;
        int times = s.length()/(2*k);
        if(s.length()%(2*k)!=0){
            times++;
        }
        int a,b,c,d;
        a = 0; //0
        b = k-1; //1
        d = b; //1
        c = b+k; //3
        for(int i=0; i<times-1; i++){
            while(a<=b){
                ans.append(s[b]);
                b--;
            }
            //b=0;
            for(int l=b+k; l<=c; l++){
                ans.append(s[l]);
            }
            a = c+1; //4
            b = a+k; //6
            c = b+k;
        }
        return ans;
    }
};
