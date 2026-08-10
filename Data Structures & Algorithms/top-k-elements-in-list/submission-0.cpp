class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

      
        for (auto& pair : freq) {
            bucket[pair.second].push_back(pair.first);
        }

       
        vector<int> result;

        for (int i = nums.size(); i >= 1; i--) {

            for (int num : bucket[i]) {

                if (result.size() >= k) {
                    return result;
                }

                result.push_back(num);
            }
        }

        return result;
    }
};
