#include<bits/stdc++.h>
using namespace std;

//Main Function

double minimiseMaxDistance(vector<int> &arr, int k) {
    
    int n = arr.size();

    // howMany[i] = number of extra gas stations placed
    // between arr[i] and arr[i+1]
    vector<int> howMany(n - 1, 0);

    // Place k gas stations one by one
    for (int gasStations = 0; gasStations < k; gasStations++) {

        long double maxVal = -1;  // maximum section length found so far
        int maxInd = -1;          // index of the segment with maximum length

        // Check all existing segments
        for (int i = 0; i < n - 1; i++) {

            // Distance between consecutive stations
            long double diff = arr[i + 1] - arr[i];

            // Current maximum sub-segment length after placements
            long double section_length = diff / (howMany[i] + 1);

            // Find the segment with the maximum section length
            if (section_length > maxVal) {
                maxVal = section_length;
                maxInd = i;
            }
        }

        // Place one gas station in the segment
        // which currently has the largest section length
        howMany[maxInd]++;
    }

    // After placing all k gas stations,
    // find the maximum distance between adjacent stations
    long double maxAns = 0;

    for (int i = 0; i < n - 1; i++) {

        long double diff = arr[i + 1] - arr[i];
        long double section_length = diff / (howMany[i] + 1);

        // Update the maximum distance
        maxAns = max(maxAns, section_length);
    }

    // Return the minimized maximum distance
    return (double)maxAns;
}





int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);

    cout << "The answer is: " << ans << "\n";
    return 0;
}