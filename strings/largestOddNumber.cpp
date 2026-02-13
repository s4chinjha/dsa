#include<bits/stdc++.h>
using namespace std;

//Main Function

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();

        
        for(int i = n-1 ;i>-1;){

            int s = num[i] - '0';

            if(s % 2 == 0){
               i--;
            }
            else{
                return num.substr(0,i+1);
            }
        }
        return "";
    }

    
};

int main(){

	return 0;
}