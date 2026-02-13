#include<bits/stdc++.h>
using namespace std;

//Main Function

int findKthPositive(vector<int>& arr, int k) {

	int n = arr.size();
	int lo = 0,hi = n-1;
    
    while(lo <= hi){

    	int mid = (lo+hi)/2;

    	int missing = arr[mid]-(mid+1);
    	
    	if(missing < k){
    		lo = mid+1;
    	}

    	else
    		hi = mid-1;
    }
        return lo+k;
}


    //missing => arr[hi]-(hi+1)
    //more => k-missing
    
    //arr[hi]+more => arr[hi]+(k-(arr[hi]-(hi+1)))

    //k+1+hi

    //We know low = hi+1

    //so return low + k

    //return arr[hi]+more



int main(){
	int n;cin>>n;

	vector<int> arr(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	return 0;
}