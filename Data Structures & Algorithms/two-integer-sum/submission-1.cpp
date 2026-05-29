class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> history;

        for (int i = 0; i < nums.size(); i++) {
            int cand = target - nums[i];
            if ((history.contains(cand))) {
                return vector<int> {history[cand], i};
            }
            else {
                history[nums[i]] = i;
            }

            }
            return {};
    }
};
