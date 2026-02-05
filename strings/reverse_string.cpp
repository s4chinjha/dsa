#include<bits/stdc++.h>
using namespace std;

//Main Function

class Solution{
public:
    void reverseString(vector<char>& s){
        int n = s.size();

        int st = 0;
        int l = n-1;

        while(st<l){
            swap(s[st],s[l]);
            st++;
            l--;
        }
    }
};



int main(){
    vector<char> char_vec;
    char c;
    cout << "Enter characters (press Enter when done): ";

    while (cin.get(c) && c != '\n') {
        char_vec.push_back(c);
    }

    Solution sol;

    sol.reverseString(char_vec);

    for(char ch:char_vec){
        cout << ch << " ";
    }
    cout << endl;
	
	return 0;
}