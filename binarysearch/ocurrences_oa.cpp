#include<bits/stdc++.h>
using namespace std;

//Optimal Approach
int first(vector<int> &arr,int n,int x){
	int lo=0,hi=n-1;
	int first= -1;

	while(lo<=hi){
		int mid = (lo+hi)/2;


		if(arr[mid] == x){
			first=mid;
			hi=mid-1;
		}

		else if(arr[mid] > x){
			hi=mid-1;
		}
		else
			lo=mid+1;
	}

	return first;

}

int last(vector<int> &arr,int n,int x){

	int lo=0,hi=n-1;

	int last= -1;

	while(lo<=hi){
		int mid = (lo+hi)/2;

		if(arr[mid] == x){
			last = mid;
			lo=mid+1;
		}

		else if(arr[mid] > x){
			hi=mid-1;
		}
		else{
			lo=mid+1;
		}
	}

		return last;
	

}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x){
	int f = first(arr,n,x);
	if(f == -1){
		return {-1,-1};
	}
	int l = last(arr,n,x);
	return {f,l};
}


int main(){
	int n;cin>>n;int x;cin>>x;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	

	pair<int,int> ans = firstAndLastPosition(arr,n,x);

	cout<< ans.first << " " <<ans.second << endl;

	return 0;
}