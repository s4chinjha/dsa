#include<bits/stdc++.h>
using namespace std;

// Implement LowerBound & UpperBound

//Lowerbound: Smallest Index such that " arr[ind] >= x "
//x = target number to find
//For default, if there is no num then we consider the hypothetical
//num with index = n(the num of element in the arr)

//Algorithm to find lowerbound

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



int main(){
	int n;cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;cin>>x;
	int ans = lowerbound(arr,n,x);
	cout << ans;
	return 0;
}

//Easy way to do this lb = lower_bound(arr.begin(),arr.end(),x)
//Index = lb - arr.begin()