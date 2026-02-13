#include<bits/stdc++.h>
using namespace std;

//Main Function

double minimiseMaxDistance(vector<int> &arr, int k) {
    int n = arr.size();

    vector<int> howMany(n-1,0);

    //pq will be used to store the diff and the index
    priority_queue <pair<long double ,int>> pq;

    //push all the values in the pq

    for(int i = 0;i< n-1;i++){
        pq.push({arr[i+1] - arr[i], i});
    }

    for(int gasStations = 0;gasStations <= k;gasStations++){
        auto tp = pq.top(); pq.pop();

        int secInd = tp.second;

        howMany[secInd]++;

        long double inidiff = arr[secInd + 1]- arr[secInd];

        long double newSecLen = inidiff /(long double)(howMany[secInd] + 1.0);

        pq.push({newSecLen,secInd});
    }

    return pq.top().first;

}




int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);

    cout << "The answer is: " << ans << "\n";
    return 0;
}