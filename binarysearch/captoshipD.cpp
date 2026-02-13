#include<bits/stdc++.h>
using namespace std;

//Main Function

int calnoofDays(vector<int> & weights,int mid){
	int days = 0;
	int cnt = 0;
	int n = weights.size();
	for(int i = 0;i < n;i++){
		if(cnt < mid){
			cnt += weights[i];
		}

		else
			days++;
	}

	return cnt;
}

int leastWeightCapacity(vector<int>& weights, int days) {

	int n = weights.size();

	int lo = *max_element(arr.begin(),arr.end());

	int hi = accumulate(arr.begin(),arr.end());

	while(lo <= hi){

		int mid = (lo+hi)/2;

		int numberofDays = calnoofDays(weights,mid);

		if(numberofDays <= d){
			hi = mid-1;
		}

		else
			lo =mid+1;
	}

	return lo;
    
}


int main(){
	int n;cin>>n; int days; cin>> days;

	vector<int> arr(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout << shipWithinDays(arr,days);
	
	return 0;
}