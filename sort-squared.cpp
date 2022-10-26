class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squared;
        map<int, int> cnt;
        for(const int& num: nums) {
            ++cnt[num * num];
        }
        for (pair<const int, int> p: cnt) {
            while(p.second--) squared.emplace_back(p.first);
        }
        return squared;
    }
};
