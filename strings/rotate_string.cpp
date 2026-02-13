#include<bits/stdc++.h>
using namespace std;

// goal is to check if a string can be obtained by rotating

class Solution {
public:
    bool rotateString(string s, string goal) {

        // check if the no of strings are same
        int sl = s.length(),gl=goal.length();
        if(sl != gl) return false;

        //iterate over and check with goal

        for(int i = 0;i < sl;i++){
            //using 
            //s.substr(i) takes string from i to end 
            //and s.substr(0,i) takes from 0 to ith position 
            string rotated = s.substr(i) + s.substr(0,i);

            if(goal == rotated){
                return true;
            }
        }

        return false;
        



            
    }
};
