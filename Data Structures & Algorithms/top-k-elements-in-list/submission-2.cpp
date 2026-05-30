class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq = {};
        vector<int> res = {};

        for (int num : nums) {
            if (!freq.contains(num)) {
                freq[num] = 1;
            }
            else {
                freq[num]+=1;
            }
        }
        
        priority_queue<pair<int,int>> values;  // {frequency, number}

        for (auto& val : freq) {
            values.push({val.second, val.first});  // {freq, number}
        }
        int top_k = k;
        while (top_k > 0) {
            res.push_back(values.top().second);  // get the number, not freq
            values.pop();
            top_k--;
        }

        return res;

    }
};
