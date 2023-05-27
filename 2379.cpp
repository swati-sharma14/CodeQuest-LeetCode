class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int color = 0;
        for(int i=0; i<k; i++){
            if(blocks[i] == 'W'){
                color++;
            }
        }
        int mini = color;
        int j = 0;
        for(int i=k; i<blocks.size(); i++){
            if(blocks[j]=='W'){
                color--;
            }
            if(blocks[i]=='W'){
                color++;
            }
            mini = min(mini,color);
            j++;
        }
        return mini;
    }
};
