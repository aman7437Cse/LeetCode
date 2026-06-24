class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maximum = 0;
        vector <int> map (101, 0);
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
            maximum = max(maximum, map[nums[i]]);
        }
        int sum = maximum * count(map.begin(), map.end(), maximum);
        return sum;
    }
};