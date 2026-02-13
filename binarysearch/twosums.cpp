#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> nums, int target) {
    
    int n = nums.size();

    if(nums[0]+nums[1] == target){
        return (0,1);
    }
    if(nums[n-1]+nums[n-2] == target){
        return (0,1);
    }


    vector<int> ans;

    sort(nums.begin(),nums.end());

    int low=1,high=n-2;

    while(low<=high){

        int mid = (low+high)/2;

        if(nums[mid]+nums[mid-1] == target){
            return 
        }

        else if(nums[mid]+nums[mid+1] == target){

        }


    }


















    for(int i = 1;i<n;i++){

        if(nums[i]+nums[i-1] == target){
            ans.push_back(i);
            ans.push_back(i-1);
            return ans;
        }
    }

    return ans;
}



int main(){
    int n;cin>>n;int t;cin >>t;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }




    return 0;
}