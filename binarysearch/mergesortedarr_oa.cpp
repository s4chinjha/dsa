#include<bits/stdc++.h>
using namespace std;

double median(vector<int>& a,vector<int> b){
	int n1 = a.size();
	int n2 = b.size();
	
	//to make sure the n1 is small for less T.C.

	if(n1>n2) return median(b,a);

	int n = n1+n2;

	int low = 0, high = n1;

	//to select how many nums to nedde
	int left = (n1+n2+1)/2;

	while(low<=high){
		//mid for array 1
		int mid1 = (low+high)/2;
		//mid for array 2
		int mid2 = left-mid1;

		int l1 =INT_MIN,l2=INT_MIN;
		int r1 =INT_MAX,r2=INT_MAX;
		//we are looking for a index but make sure it exists in the array

		//placing and checking if there is the mid1 and mid2 there in the arr
		if(mid1<n1) r1 = a[mid1];
		if(mid2<n2) r2 = b[mid2];

		if(mid1-1 >= 0) l1 = a[mid1-1];
		if(mid2-1 >= 0) l2 = b[mid2-1];

		//final condn to check 1. l1<r2 2. l2<r1

		if(l2<=r1 && l1<=r2){
			if(n%2==1){
				return max(l1,l2);
			}
			else return (double)((max(l1,l2)+min(r1,r2) )/ 2);
		}

		//if it is not fullfilled apply Binary search 

		if(l1 > r2){
			high = mid1-1;
		}
		else
			low = mid1+1;

		
	}

	return 0.0;
}