//BS-8. Single Element in Sorted Array
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n = a.size();

        int l,h,ans;
        //1 element only
        if(n==1){
        	return a[0];
        }
        //for the first ans last element 

        if(a[0] != a[1]){
        	return a[0];
        }

        if(a[n-1] != a[n-2]){
        	return a[n-1];
        }

        //for the remaining edge cases
        l=1;h=n-2;
        while(l<=h){
        	int mid = (l+h)/2;

        	//mid ele check

        	if(a[mid] != a[mid-1] && a[mid] != a[mid+1]){return a[mid];}


        	//left delete

        	if(mid%2==1 && a[mid-1]==a[mid] || mid%2==0 && a[mid]==a[mid+1]){
        		l = mid+1;}

        	//right delete
        	else{
        		h = mid-1;
        	}

        }

        return -1;

    }
};

int main(){
	int n;cin >> n;
	int k;cin>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	Solution sol;

	int ans = sol.singleNonDuplicate(a);return ans;

	return 0;

}