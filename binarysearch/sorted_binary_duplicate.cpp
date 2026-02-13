#include<bits/stdc++.h>

// 1 change from Search in Rotated Sorted Array I

using namespace std;
//target = x

bool search(vector<int>& arr, int x) {
	int n = arr.size();

	int lo=0,hi=n-1;

	while(lo<=hi){
		int mid = (lo+hi)/2;
		if(arr[mid] == x ){ return 1;}

		//This conditions is added when three of them are same and no the target
		//then trim  down the array or search space
		if(arr[lo] == arr[mid] && arr[mid] == arr[hi]){
			lo = lo+1;
			hi = hi-1;
			continue;
		}
		//Below code is perfect

		//left sorted
		if(arr[mid] >= arr[lo]){

			if(arr[lo] <= x && x <= arr[mid]) hi = mid-1;

			else
				lo = mid+1;}
		
		//right sorted

		else
			if(x >= arr[mid] && x <= arr[hi]){ lo = mid+1;}

			else
				hi=mid-1;
	}return 0;
        
}

int main(){
	int n;cin>>n;int x;cin>>x;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout << search(arr,x);
	return 0;
}