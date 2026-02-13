#include<bits/stdc++.h>
using namespace std;

int func(int i,int n){

	int ans = 1;

	for(int j=0;j<n;j++){
		ans *= i;
	}
	return ans;
}

int nthRoot(int n,int m){

	//I need to find (m)^(1/n)

	for(int i=1;i<m;i++){
		
		int iN = func(i,n);

		if(iN ==  m){
			return i;
		}

		else if(iN > m){
			break;
		}
		
	}

	return -1;
}

int main(){

	int n,m;cin>>n>>m;

	cout << nthRoot(n,m);

	return 0;
}