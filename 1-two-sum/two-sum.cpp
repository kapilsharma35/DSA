class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int, int> seen; // number -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        // If complement is already in the map, return the pair
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }

        // Otherwise, store the current number with its index
        seen[nums[i]] = i;
    }

    // If no solution found (though problem guarantees one)
    return {};
    }
};