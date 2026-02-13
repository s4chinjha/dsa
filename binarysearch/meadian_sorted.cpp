#include<bits/stdc++.h>
using namespace std;

//Main Function

//Brute Force:
	//Put all the elements of the 2D mat in a 1D arr then sort the array and get the median

class Solution{
public:
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
	int countsmallequal(vector<vector<int>> &matrix,int n, int m,int x){

		int cnt = 0;
		for(int i = 0;i < n;i++){

			cnt += upperbound(matrix[i],m,x);
		}

		return cnt;
	}

	int median(vector<vector<int>> &matrix, int m, int n) {
    	int low = INT_MAX;int high = INT_MIN;
    	 n =matrix.size();  m= matrix[0].size();

    	for(int i = 0;i<n;i++){
    		low = min(low,matrix[i][0]);

    		high = max(high,matrix[i][m-1]);

    	}
   		int req_med_ind = (n*m)/2;

    	while(low<=high){

    		int mid = (low+high)/2;

    		int smallequal = countsmallequal(matrix,n,m,mid);


    		if(smallequal <= req_med_ind ){
    			low = mid+1;
    		}
    		else
    			high = mid-1;

    	}

    	return low;
    	
}

};



int main(){
	int n;cin>>n;

	vector<int> arr(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	Solution sol;

	cout >> sol. ;

	return 0;
}