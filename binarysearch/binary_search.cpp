#include<bits/stdc++.h>
using namespace std;

//Implementing Binary_Search Iteratively


//Learning: "int mid = low+high/2;" doing this
// outside the whiels loop.So, i was getting a segmentation fault
//use this"low+(high-low)/2" i was getting -1 for target 3 in 1 2 3

int binary_search(int arr[],int n,int target){	

	int low=0,high=n-1;

	for(int i=0;i<n;i++){

		while(low<=high){
		
		int mid = low+(high-low)/2;
		
		if(target==arr[mid])return mid;

		else if(target>arr[mid])
			low = mid+1;

		else high = mid-1;
		}
	}
	return -1;
}

int main(){
	int n,arr[n];

	//Take the no. of elements in the array input
	cin >> n;

	//Take the array input
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int target; cin >> target;

	cout << binary_search(arr,n,target);

	return 0;
}