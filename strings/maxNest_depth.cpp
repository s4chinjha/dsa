#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        //get the length of the string
        int n = s.length();

        //iterate over the string

        int cnt = 0;int maxDepth = INT_MIN;

        for(int i = 0;i<n;i++){

            //+1 for getting a "("

            if(s[i] == '('){

                cnt++;

            }
            //-1  for getting a ")"
            if(s[i] == ')'){

                cnt--;

            }

            maxDepth = max(cnt,maxDepth);

        }

        return maxDepth;
    }
};