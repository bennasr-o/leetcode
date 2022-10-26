class Solution {
public:
    void rotate(vector<int>& v, int k) {
        std::rotate(v.rbegin(), v.rbegin() + k % v.size(), v.rend());
    }
};
