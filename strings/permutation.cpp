#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isfreqsame(int freq1[],int freq2[]){
        
        for(int i = 0;i < 26;i ++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        //a loop to inc freq for the char in the s1 string

        for(int i = 0;i < s1.length();i++){
            // calculate the index for the char in s1
            int idx = s1[i] - 'a';

            freq[idx]++;
        }

        // same loop for the s2 string
        //we will check for the permutation in block [..] size = s1.length()

        for(int i = 0;i < s2.length();i++){
            int freq_str2[26] = {0};

            int blockIdx = 0,str2idx = i;
            
            while(blockIdx < s1.length() && str2idx < s2.length()){
                freq_str2[s2[str2idx] - 'a']++;
                blockIdx++;str2idx++;
            }

            if(isfreqsame(freq,freq_str2)){
                return true;
            }
        }
        return false;

    }
};
int main(){
    return 0;
}