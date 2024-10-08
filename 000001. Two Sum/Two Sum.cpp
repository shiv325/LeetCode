class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> sumIndices;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    sumIndices.push_back(i);
                    sumIndices.push_back(j);
                    break;
                }
            }
        }
        return sumIndices;
    }
};
