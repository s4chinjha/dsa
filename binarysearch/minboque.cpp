#include<bits/stdc++.h>
using namespace std;

//Main Function
	int totf(vector<int> & arr,int j,int k,int m ){
		int mul = m*k;

		int ans =0;

		int num = a[j];

		int cnt = 0;

		for(int i=0;i<n;i++){

			if(a[i] <= num ){
			ans++;

			}
		}

		if(ans == mul){
			for(int i=0;i<n;i++){


			while(cnt<k){

				if(cnt == k){
					cnt = 0;
				}

			}
		}
			}

		return ans;
	}
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here


        int n=arr.size();

        if(m*k > n ){return -1;}

        for(i=0;i<n;i++){

        	totfloweri = totf(arr,i);
        	//consecutive or not

        	if(totfloweri == m*n){

        	}
        	continue;

        }


        

        return -1;

        
    }



int main(){
	int n;cin>>n;

	vector<int> arr(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int k,m;cin>>k,m;

	minDaysBloom(arr,k,m);

	return 0;
}