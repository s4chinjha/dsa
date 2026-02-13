#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        //iterate over the string store no of times it appears
        //sort in decreasing order

        int n = s.length();

        //create a map to store char and freq of char

        unordered_map<char,int> freq;

        for(char c:s){

            freq[c]++;
        }

        //use bucket sort, to store char of same freq in one bucket

        vector<vector<char>> bucket(n+1);

        for(auto &p:freq){
            //storing in the bucket
            bucket[p.second].push_back(p.first);
        }

        //after storing now rewrite then in dec.order in ans
        string ans ="";
        for(int i = n;i>=1;i--){
            //iterate over the bucket
            for(char c: bucket[i]){
                ans += string(i,c);

            }

        }

        return ans;


        
    }
};