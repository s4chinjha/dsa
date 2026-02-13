#include<bits/stdc++.h>
using namespace std;

//Main Function

class Solution{
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        
        for(int i = 0;i < n;){
        
        	int cnt = 0;

        	char ch = chars[i];
        	//a loop keep the count of the same word

        	while(i<n && ch == chars[i]){

        		cnt++;i++;

        	}

        	//a condn to rewrite the string with the char and its cnt

        	//1. when cnt = 1
        	if(cnt == 1){
        		chars[idx++] = ch;
        	}
        	//2. cnt > 1
        	else(cnt > 1){
        		chars[idx++] = ch;
	       		string str = to_string(cnt);
	       		for(char it:str){
	       			chars[idx++] = it;	
	       		}
	       		

        	}
        }
        //return the string till idx-1
        //resize it using .resize

        return chars.resize(idx);
    }
};



int main(){
	
	return 0;
}