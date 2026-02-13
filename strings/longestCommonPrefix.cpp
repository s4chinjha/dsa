#include<bits/stdc++.h>
using namespace std;
//leet 14
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // sort the array
        int n = strs.size();
        if (n == 0) {
            return "";
        }

        sort(strs.begin(), strs.end());

        string s1 = strs[0], s2 = strs[n - 1];

        int l = min(s2.length(), s1.length());

        if (n == 1) {
            return s1;
        }
        string ans = "";
        for (int i = 0; i < l;) {

            if (s1[i] == s2[i]) {
                ans += s1[i];
                i++;
            } else {
                break;
            }
        }

        return ans;
    }
};