class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<char, char> paren = {{')', '('}, {'}','{'}, {']', '['}};
        vector<char> stck = {};

        for (char x : s) {
            if (paren.contains(x)) {
                if (!stck.empty() && paren[x] == stck.back()) {
                    stck.pop_back();
                }
                else {
                    return false;
                }
            }
            else {  
                stck.push_back(x);
            }
        }
        if (!stck.empty()) return false;

        return true;

    }
};
