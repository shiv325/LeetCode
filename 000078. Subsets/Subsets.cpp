class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> powerSet;
        int n = nums.size();
        vector <int> combinations(n, 0);
        int totalSubsets = pow(2, n);
        for (int i = 0; i < totalSubsets; i++) {
            vector <int> subset;
            for (int j = n - 1; j >= 0; j--) {
                if (combinations[j] == 0) {
                    combinations[j] = 1;
                    break;
                }
                else {
                    combinations[j] = 0;
                }
            }
            for (int j = 0; j < n; j++) {
                if (combinations[j] == 1) {
                    subset.push_back(nums[j]);
                }
            }
            powerSet.push_back(subset);
        }
        return powerSet;
    }
};
