#include<bits/stdc++.h>
using namespace std;

//Better Approach

//Use raw binary search or lower_bound & upper_bound concept

int lowerbound(vector<int> &arr,int n,int x){
	//Hypopthetical answer in case no index is found
	int ans = n;
	int low=0,high = n-1;
	//2 cases (i) It is a num which is arr[ind] >= x (ii) It is not
	
	// Condition to check when low and high cross each other (to stop)
	while(low <= high){
		int mid = low + (high-low)/2;
		//(i) Store the value in ans ans look for the smallest on the left side
		if(arr[mid] >= x){
			ans = mid;

			high = mid-1;
		}
		//(ii) It is not found so delete left and  move to the right section
		else
			low = mid+1;
		}
	
	return ans;
}

int upperbound(vector<int> &arr,int n,int x){
	//Hypopthetical answer in case no index is found
	int ans = n;
	int low=0,high = n-1;
	//2 cases (i) It is a num which is arr[ind] >= x (ii) It is not
	
	// Condition to check when low and high cross each other (to stop)
	while(low <= high){
		int mid = low + (high-low)/2;
		//(i) Store the value in ans ans look for the smallest on the left side
		if(arr[mid] > x){
			ans = mid;

			high = mid-1;
		}
		//(ii) It is not found so delete left and  move to the right section
		else
			low = mid+1;
		}
	
	return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x){

	int lb = lowerbound(arr,n,x);

	if(arr[lb] != x || lb == n){
		return {-1,-1};
	}

	return {lb,upperbound(arr,n,x)-1};

}


int main(){
	int n;cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;cin>>x;

	pair<int,int> ans = firstAndLastPosition(arr,n,x);

	cout<< ans.first << " " <<ans.second << endl;

	return 0;
}