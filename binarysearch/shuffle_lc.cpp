#include<bits/stdc++.h>
using namespace std;


 	vector<int> shuffle(vector<int>& arr, int n) {
        //store the 2 arrays in 2 separate arrays

        vector<int> arr1(n);
        vector<int> arr2(n);

        for(int i = 0;i<2*n;i++){
            if(i>=n){
                arr2[i-n] = arr[i];
                // cout << arr2[i-n] << " " ;
            }

            else if(i<n){

            	arr1[i] = arr[i];
            	// cout << arr1[i] << " " ;

        }           

        }

        vector<int> ans(2*n);

        for(int i =0;i<2*n;i++){
            //put in alternate form the values

            if(i%2==0){
                ans[i] = arr1[i/2];

                // cout << ans[i] << "o";
                continue;
            }

            ans[i]=arr2[(i-1)/2];

            // cout << ans[i];

        }

        return ans;
    }


int main(){

	int n;cin>>n;

	vector<int> arr(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	vector<int> ans = shuffle(arr,n/2);

	for(auto it: ans){
		cout<<it;
	}
	return 0;
}