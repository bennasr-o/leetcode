class Solution {
public:
    void reverseString(vector<char>& s) {
        int lo = 0, hi = s.size() - 1;
        char tmp;
        while(lo < hi) {
            tmp = s[lo];
            s[lo++] = s[hi];
            s[hi--] = tmp;
        }
    }

    string reverseWords(string s) {
        int lo = 0, hi = lo;string reversed = "";
        while(hi++ < s.size()) {
            if (s[hi] == ' ') {
                vector<char> rev;
                for (int i = lo; i < hi; ++i) {
                    rev.push_back(s[i]);
                }
                
                reverseString(rev);
                
                for (char& c: rev) {
                    reversed += c;
                }
                reversed += " ";
                lo = hi + 1;
                hi = lo;
            }
            
            if (hi == s.size() - 1) {
                vector<char> rev;
                for (int i = lo; i <= hi; ++i) {
                    rev.push_back(s[i]);
                }
                
                reverseString(rev);
                
                for (char& c: rev) {
                    reversed += c;
                }
            }
        }
        return reversed;
    }
};
