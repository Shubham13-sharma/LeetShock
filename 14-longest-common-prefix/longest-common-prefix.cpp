class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(), s.end());
        int i = 0;
        while (i < s[0].size() && s[0][i] == s.back()[i]) i++;
        return s[0].substr(0, i);
    }
};
