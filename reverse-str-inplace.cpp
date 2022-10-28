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
};
