//B.S 7 Find out how many times array has been rotated
#include<bits/stdc++.h>
using namespace std;

//only thing that is updated is instead of min function
//we are doing it manually by comparing the values
//and adding index and updating it int the function


int findKRotation(vector<int> &a) { 
	int n = a.size(); int l=0,h=n-1,m,ans=INT_MAX,idx= -1;
	while(l <= h){ 
		m = (l+h)/2;

		//optimization if after delete one side remaining is sorted or not check

		if(a[l] <= a[h]){
			if(a[l] < ans){
				idx=l;
				ans= a[l];
			}
			break;
		}

		//left sorted
		if(a[l] <= a[m]){
			//store min of a[l] and ans as ans
			if(a[l] < ans){
				idx=l;
				ans= a[l];
			}
			//update low
			l=m+1;
		}

		//right sorted
		else {
			if(a[m] < ans){
				idx=m;
				ans= a[m];
			}
			h=m-1; 
		}
	}
	return idx;
	
}


int main(){
	int n;cin >> n;
	// int k;cin>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout << findKRotation(a);
	return 0;
}