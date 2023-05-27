class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for(int i=0; i<(sentences.size()); i++){
            int total = 0;
            for(int j=0; j<sentences[i].size(); j++){
                if((int)sentences[i][j] == 32){
                    total+=1;
                }
            }
            if(max < total){
                max = total;
            }
        }
        return max+1;
    }
};
