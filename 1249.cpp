class Solution {
public:
    string minRemoveToMakeValid(string str) {
        std::stack<std::pair<char, int>> s;
        std::map<int, int> index;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ')') {
                while (!s.empty() && s.top().first != '(') {
                    s.pop();
                }
                if (s.empty()) {
                    index[i] += 1;
                } else {
                    s.pop();
                }
            } else {
                s.push(std::make_pair(str[i], i));
            }
        }
        while (!s.empty()) {
            if (s.top().first == '(') {
                index[s.top().second] += 1;
            }
            s.pop();
        }
        std::string a;
        for (int i = 0; i < str.size(); i++) {
            if (index[i] == 0) {
                a += str[i];
            }
        }
        return a;
    }
};
