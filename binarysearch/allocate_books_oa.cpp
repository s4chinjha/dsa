#include<bits/stdc++.h>
using namespace std;

//Main Function

int countstudent(vector<int>& arr,int pages){
	int n = arr.size();

	int student = 1;
	//student = 0 (mistake)

	long long pagesStudent = 0;

	for(int i = 0;i < n;i++){
		if(pagesStudent+ arr[i] <=  pages){
			pagesStudent += arr[i];
		}

		else{
			student += 1;

			pagesStudent = arr[i];

		}			
	}
	return student;
}
int findPages(vector<int>& arr, int n, int m) {

	//Edge Case not possible

	if(m > n){
		return -1;
	}

	//Min number required to give each book to atleast 1 student
	int lo = *max_element(arr.begin(),arr.end());

	int hi = accumulate(arr.begin(),arr.end(),0);

	while(lo <= hi){
		int mid = (lo+hi)/2;

		int student = countstudent(arr,mid);

		if(student >  m){
			lo = mid+1;
		}
		else{
			hi = mid-1;
		}
	}

	return lo;
}



int main(){
	int n;cin>>n;

	vector<int> arr(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	return 0;
}