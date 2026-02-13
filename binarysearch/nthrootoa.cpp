#include<bits/stdc++.h>
using namespace std;

//using binary search

//9 1953125 Failing this test case
//Overflow case add a edge case where if the value
//passes the value m then we just stop.

//return 1 if == m 2 if > m ans 0  <m

int func(int i,int n,int m){

	long long ans = 1;

	for(int j=0;j<n;j++){
		ans *= i;
		if(ans > m)
			return 2;
	}

	if(ans == m) return 1;

	return 0;
}

int NthRoot(int n,int m){
		
		int lo=1,hi=m;

		while(lo<=hi){
			int mid =(lo+hi)/2;

			// mid^n

			int valMn = func(mid,n,m);

			if(valMn == 1){
				return mid;
			}

			
			else if(valMn == 0){
				lo = mid+1;
			}
			else {
				hi = mid-1;
			}

		}
		return -1;
}


int main(){
	int n,m;cin>>n>>m;

	cout << NthRoot(n,m);

	return 0;
}