#include<bits/stdc++.h>
using namespace std;

//Main Function
//Aggressive Cows


bool canweplace(vector<int> &stalls, int dist,int cows){

	int n = stalls.size();
	int cntcows = 1;int last = stalls[0];// c1 marked as starting point

	for(int i = 1;i<n;i++){

		if(stalls[i]-last >= dist){
			cntcows += 1;

			last = stalls[i];
		}

	}

	if(cntcows >= cows){
		return true;
	}

	return false;

}

int aggressiveCows(vector<int> &stalls, int k)
{
   sort(stalls.begin(),stalls.end());

   int n = stalls.size();
   int lo = 1;int hi = stalls[n-1]-stalls[0];//mistake lo =1 and n was n-1
	int ans = 0;
   while(lo<=hi){


   	int mid = (lo+hi)/2;

   	if(canweplace(stalls,mid,k) == true){
		ans = mid;
   		lo = mid + 1;
   }

   else{
   		hi = mid-1;
	}
  
}

 return ans;
}

int main(){
	int n;cin>>n;int k; cin >> k;

	vector<int> arr(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout << aggressiveCows(arr,k);

	return 0;
}