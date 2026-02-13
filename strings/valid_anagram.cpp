#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        //edge case "length of s,t is = "

        int sl = s.length(),tl =t.length();

        if(sl != tl ) return 0;

        //take an array of 26 char "a-z"

        int arr[26] ={0};

        //iterate over s and +1 for all char

        for(char ch:s){
            int idx = ch-'a';

            arr[idx]++;
        }
        for(char ch:t){
            int idx = ch-'a';

            arr[idx]--;
        }

        for(int i = 0;i < 26;i++){
            if(arr[i] != 0){
                return 0;
            }
        }

        return 1;

    }
};