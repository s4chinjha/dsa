#include<bits/stdc++.h>
using namespace std;

//Main Function

int cntSum(vector<int> & arr, int div){

	int cnt = 0;

	for(int i = 0;i < arr.size();i++){
		cnt  = cnt + ceil((double)arr[i]/(double)div);
	}

	return cnt;
}




int smallestDivisor(vector<int> & arr, int limt){

	int lo = 1,hi = *max_element(arr.begin(),arr.end());

	int n = arr.size();

	while(lo <= hi){

		int mid = (lo+hi)/2;

		if(cntSum(arr,mid) <= limt){
			hi = mid-1;
		}

		else{
			lo = mid+1;
		}

	}
	return lo;
}

int main(){
	int n;cin>>n;int threshold;cin >> threshold;

	vector<int> arr(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout << smallestDivisor(arr,threshold);
	return 0;
}