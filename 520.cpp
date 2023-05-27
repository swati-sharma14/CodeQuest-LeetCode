class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length()==1){
            return true;
        }

        int first = 0;
        int crest = 0;
        int val = word[0];
        if(val>=65 && val<=90){
            first = 1;
        }
        for(int i=1; i<word.length(); i++){
            val = word[i];
            if(val>=65 && val<=90){
                crest += 1;
            }
        }
        if(first + crest == word.length()){
            return true;
        }
        else if(first + crest == 0){
            return true;
        }
        else if( first == 1 && crest == 0){
            return true;
        }
        return false;
    }
};
