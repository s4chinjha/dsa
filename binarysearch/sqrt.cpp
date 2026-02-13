#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

	int squareRoot(int a){
		
		int lo=1,hi=a;

		while(lo<=hi){
			int mid = (lo+hi)/2;

			int val = mid*mid;

			if(val <= a){
				lo = mid+1;
			}
			else
				hi = mid-1;
		}

		return hi;
	}
};

int main(){

	int a;cin>>a;

	Solution ans;

	ans.squareRoot(a);

	return 0;
}