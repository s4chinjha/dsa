#include<bits/stdc++.h>
using namespace std;


class Solution{
public:

	int findPeakElement(vector<int>& a) {

		int n = a.size();

		//for 1 element

		if(n==1){return 0;}

		if(a[0]>a[1]){return 0;}

		if(a[n-1]>a[n-2]){return n-1;}

		//binary search for the remaining part

		int l=1,h=n-2;

		while(l<=h){
			int mid = (l+h)/2;

			if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
				return mid;
			}

			else if(a[mid]>a[mid+1]){
				h = mid-1;
			}

			else if(a[mid]>a[mid-1]){
				l = mid+1;
			}

			//for multiple peaks or reverse of peak (intersection in the valley)

			else l=mid+1;

			//will never be executed but we have to add to satisfy int type above
			return -1;


		}
        
    }



};

int main(){
	return 0;
}