class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();

        // Count frequency of each number
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        // Collect numbers that appear more than once
        vector<int> duplicates;
        for (auto it : freq) {
            if (it.second >= 2) {
                duplicates.push_back(it.first);
            }
        }

        return duplicates;
    }
};
