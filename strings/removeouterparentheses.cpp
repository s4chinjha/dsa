#include<bits/stdc++.h>
using namespace std;

//Main Function
class Solution {
public:
    string removeOuterParentheses(string s) {
        //enter the string "(" -> +1 (inside a parentheses) ")" -> -1
        //when inside add the "(" & ")" to the result


        int cnt = 0;
        string ans = "";
        for(char ch:s){
            //cnt increment and decrement position is crucial
            if(ch == '('){
 
                if(cnt>0){
                    ans += ch;
                }
               cnt++;
            }
            else if(ch == ')' ){
                cnt--;
                if(cnt>0){
                    ans += ch;
                }

            }
            

        }

        return ans;
    }
};

int main(){
	
	return 0;
}