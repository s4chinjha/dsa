#include<bits/stdc++.h>
using namespace std;

//Main Function

class Solution{
public:
bool isPalindrome(string s) {
    string clean;

    for (char c : s) {
        if (isalnum(c)) {
            clean += tolower(c);
        }

    }

    string tmp = clean;

    reverse(clean.begin(), clean.end());

    return clean == tmp;
}
};



int main(){
    string s;
    cout << "Enter characters (press Enter when done): ";
    getline(cin,s);

    Solution sol;

    cout << sol.isPalindrome(s);

    
    cout << endl;
	
	return 0;
}