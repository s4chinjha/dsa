#include<bits/stdc++.h>
using namespace std;

//Main Answer
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
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int cnt_max = 0;
    int index = -1;

    for(int i=0;i<n;i++){
    	int cnt_ones = m - lowerbound(matrix[i],m,1);

    	if(cnt_ones > cnt_max){

    		cnt_max = cnt_ones;

    		index = i;
    	}
    }

    return index;
}


int main(){

	return 0;
}