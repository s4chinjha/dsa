#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int days, int m, int k) {
        int n = arr.size();
        int noOfBouquets = 0, cnt = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] <= days) {
                cnt++;
            } else {
                noOfBouquets += cnt / k;
                cnt = 0;
            }
        }

        noOfBouquets += cnt / k;
        return noOfBouquets >= m;
    }

    int minDaysBloom(vector<int>& arr, int k, int m) {
        int n = arr.size();
        if (1LL * m * k > n) return -1;

        int lo = *min_element(arr.begin(), arr.end());
        int hi = *max_element(arr.begin(), arr.end());

        for (int days = lo; days <= hi; days++) {
            if (possible(arr, days, m, k)) {
                return days;
            }
        }

        return -1;
    }



int main(){
	int n;cin>>n;int k,m;cin>>k>>m;

	vector<int> arr(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}



	cout << minDaysBloom(arr,k,m);

	return 0;
}