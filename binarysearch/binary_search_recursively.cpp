#include<bits/stdc++.h>
using namespace std;

//Leaning : "mid = low+high/2" will give a TLE error bcz 
// if low=0 and high = INT_MAX then the value will overflow and will give a 
//error.Either use long long or if you are sure the value is in b/w 0 and 
//INT_MAX then use mid= low+ (high-low)/2 


int bs(vector<int>& arr, int low, int high, int target) {
	if (low > high)
	    return -1;

	int mid = low + (high-low) / 2;

	if (arr[mid] == target)
	    return mid;

	else if (target > arr[mid])
	    return bs(arr, mid + 1, high, target);

	else
	    return bs(arr, low, mid - 1, target);

	return -1;
}
int search(vector<int>& arr, int target) {
	return bs(arr, 0, arr.size() - 1, target);
}

int main(){
  	int n;
    cin >> n;

    vector<int> arr(n);
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }

    int target;
    cin >> target;

    int result = search(arr, target);
    cout << result;

	
	return 0 ;
}