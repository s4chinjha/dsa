#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int ms[256] = {0},mt[256] = {0};

        if(s.length() != t.length()) return false;

        for(int i = 0;i < s.length();i++){

            //prev check of current char
            if(ms[s[i]] != mt[t[i]]){
                return false;
            }

            ms[s[i]] = i + 1;
            // cout << ms[s[i]];
            mt[t[i]] = i + 1;
            // cout << mt[t[i]];
        }

        for(int i = 0;i < s.length();i++){
            cout<< ms[s[i]]<<" " << mt[t[i]]<<" ";

            cout << endl;
        }

        return true;
        
    }
};

 int main() {
      // Create object of Solution
      Solution solution;
      
      // Sample input strings
      string s;cin >> s;
      string t;cin >> t;
      
      // Check if strings are isomorphic
      if (solution.isIsomorphic(s, t)) {
          cout << "Strings are isomorphic." << endl;
      } else {
          cout << "Strings are not isomorphic." << endl;
      }
      
      return 0;
  }