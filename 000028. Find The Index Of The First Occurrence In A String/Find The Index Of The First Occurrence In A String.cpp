class Solution {
public:
    int strStr(string haystack, string needle) {
        int stackLen = haystack.size();
        int needleLen = needle.size();
        bool found;
        for (int i = 0; i < stackLen - needleLen + 1; i++) {
            found = true;
            for (int j = 0; j < needleLen; j++) {
                if (haystack[i + j] != needle[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return i;
            }
        }
        return -1;
    }
};
