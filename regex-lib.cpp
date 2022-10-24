#include <regex>

class Solution {
public:
    bool isMatch(string s, string p) {
        regex str_ex(p);
        if (regex_match(s, str_ex)) {
            return true;
        }
        return false;
    }
};
