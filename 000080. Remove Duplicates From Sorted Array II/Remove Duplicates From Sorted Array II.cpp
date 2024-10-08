class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> :: iterator it;
        if (nums.size() > 2) {
            it = nums.begin() + 2;
            while (it != nums.end()) {
                if (*it == *(it - 1) && *(it - 1) == *(it - 2)) {
                    nums.erase(it);
                }
                else {
                    it++;
                }
            }
        }
        return nums.size();
    }
};
