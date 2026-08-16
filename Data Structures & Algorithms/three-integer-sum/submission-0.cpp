class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate 'i'
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            // Early termination
            if (nums[i] > 0) break;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int current_sum = nums[i] + nums[j] + nums[k];

                if (current_sum == 0) {
                    result.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // Skip duplicate 'j'
                    while (j < k && nums[j] == nums[j - 1]) j++;

                    // Skip duplicate 'k'
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
                else if (current_sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return result;
    }
};
