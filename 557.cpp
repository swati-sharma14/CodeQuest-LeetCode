class Solution {
public:
    string reverseWords(string s) {
        string ans;
        vector<int> a;
        a.push_back(0);
        cout << s.length() << endl;
        for(int i=0; i<(s.length()); i++){
            s c = s[i];
            cout << c << " ";
            if(c.compare(" ")) == 0){
                a.push_back(i);
            }
        }
        for(int i=0; i<a.size()-1; i++){
            cout << a[i] << endl;
        }
        
        return s;
        
    }
};
