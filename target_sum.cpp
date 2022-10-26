class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int i = 0;
        for (const auto& number: numbers) {
            if (binary_search(numbers.begin() + i, numbers.end(), target - number)) {
                auto it_target = find(numbers.begin() + i, numbers.end(), target - number);
                auto it_number = find(numbers.begin(), numbers.end(), number);
                if(it_number != it_target) {
                    res.push_back(it_number - numbers.begin() + 1);
                    res.push_back(it_target - numbers.begin() + 1);
                    break;
                }
            };
            ++i;
        }
        return res;
    }
};
