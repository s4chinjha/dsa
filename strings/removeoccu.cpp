#include<bits/stdc++.h>
using namespace std;

//Main Function

class Solution{
public:
    string removeOccurrences(string s, string part) {
        // aabcbcaabcbc abc
        //  str.find - index where the part starts,the part we are searching like abc
        // str.erase - delete a word like 'abc' we can give (start,length)
        while(s.length() > 0 && s.find(part)< s.length()){

            s.erase(s.find(part),part.length());
        }
        
        return s;
    }
};



int main(){
	string s;cin>>s;string part;cin>>part;

    Solution sol;
    cout << sol.removeOccurrences(s,part);
	return 0;
}