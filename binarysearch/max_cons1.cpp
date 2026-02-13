#include<bits/stdc++.h>
using namespace std;



    int findMax(int ans,int cnt){
        if(ans > cnt){
            return ans;
        }
        
        return cnt;
    }
    int findMaxConsecutiveOnes(vector<int>& a) {

        // Find Max concecutive 1's

        int n = a.size();

        // if(a[0] == 0 && n == 1){
        //     return 0;
        // }

        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {

            if (a[i] == 0) {
                cnt = 0;
            } else if (a[i] == 1) {
                cnt++;

                ans = findMax(ans, cnt);

            }
        }
        return ans;

        
    }

int main(){
    int n;cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = findMaxConsecutiveOnes(arr);

    cout << ans;
    // for(auto it:ans){
    //     cout << it ;
    // }
    return 0;
}