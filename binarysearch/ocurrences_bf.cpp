#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach
//Time Complexity = O(N)

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x){

	//Assign 1 & last as -1
	
	int first = -1,last = -1;

	//Traverse the array and find the 1 occurence and store index
	//in first, change index stored in last to the latest.

	for(int i = 0;i< n;i++){
		//Condition to look for "x" element
		if(arr[i]==x){
			//only change first when == -1
			if(first == -1){
				first = i;
			}

			//update last to latest whenever x found

			last = i;
		}
	}

	return {first,last};	
}
int main(){

	int n;cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;cin>>x;

	pair<int, int> ans = firstAndLastPosition(arr,n,x)	;

	cout << ans.first << " " << ans.second;

	return 0;
}