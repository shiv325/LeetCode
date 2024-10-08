class Solution {
public:
    int lengthOfLastWord(string s) {
        s = " " + s + " ";
        int i = s.size() - 1;
        while (s[i] == ' ') {
            i--;
        }
        int lastWordLen = 0;
        while (s[i] != ' ') {
            i--;
            lastWordLen++;
        }
        return lastWordLen;
    }
};
