#include<bits/stdc++.h>
using namespace std;

//2D Matrix -> Flatten to 1D Matrix 
// in your mind -> Find a formula to convert 1D coordinate to 2D coordinate

//Row number = index/m(column number)
//Col number = inde%m

class Solution{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     	   //declare low and high

    	int n = matrix[0].size();
    	int m = matrix.size();

    	int low = 0;
    	int high = (n*m)-1;

    	while(low <= high){

    		int mid = (low+high)/2;

    		int row_num = mid/m;
    		int col_num = mid%m;

    		if(matrix[row_num][col_num] == target){
    			return true;
    		}

    		else if(matrix[row_num][col_num] < target){
    			low = mid+1;
    		}
    		else{
    			high = mid-1;
    		}

    	}

    	return false;
    }	
};