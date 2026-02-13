#include<bits/stdc++.h>
using namespace std;

//Find Minimum in Rotated Sorted Array

int findMin(vector<int>& a) { 
	int n = a.size(); int l=0,h=n-1,m,ans=INT_MAX;
	while(l <= h){ 
		m = (l+h)/2;

		//optimization if after delete one side remaining is sorted or not check

		if(a[l] <= a[h]){return min(ans,a[l]);}

		//left sorted
		if(a[l] <= a[m]){
			//store min of a[l] and ans as ans
			ans = min(ans,a[l]);
			//update low
			l=m+1;

		}
		//right sorted
		else {
			ans = min(ans,a[m]);
			h=m-1; 
		}
	}
	return ans;
	
}


int main(){
	int n;cin >> n;
	// int k;cin>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout << findMin(a);
	return 0;
}