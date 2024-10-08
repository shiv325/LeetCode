class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> :: iterator it;
        it = nums.begin() + 1;
        while (it != nums.end()) {
            if (*it == *(it - 1)) {
                nums.erase(it);
            }
            else {
                it++;
            }
        }
        return nums.size();
    }
};
