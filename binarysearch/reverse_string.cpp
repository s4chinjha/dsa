#include<bits/stdc++.h>
using namespace std;

//Main Function

class Solution{
public:
    string reverseWords(string s) {
     int n = s.length();

     string ans = "";
     //reverse the whole sentence

     reverse(s.begin(),s.end());

     for(int i=0;i<n;i++){

     	string word="";

     	//for a single word to reverse it

     	while(i<n && s[i] != ' '){
     		//add to the string word the word

     		word += s[i];
     		i++;
     	}

     	//reverse the word too

     	reverse(word.begin(),word.end());

     	//add the reversed words to the ans sentece
     	if(word.length() > 0){
	     	ans += " "+word;
     	}

     }   
     //a extra space was added to the first word which we dont need
     //substring is use to proveide the string from any index
     return ans.substr(1);
    }
};



int main(){
	
	return 0;
}