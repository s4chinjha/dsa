#include<bits/stdc++.h>
using namespace std;

//Main Function

class Solution{
public:
    int find_row_index(vector<vector<int>>& mat, int mid) {
        int row_n = mat.size();
        int col_m = mat[0].size();

        int index = -1;

        int max_col_num = -1;

        for (int i = 0; i < row_n; i++) {

            if (mat[i][col_m] > max_col_num) {

                max_col_num = mat[i][col_m];

                index = i;
            }
        }

        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int row_n = mat.size();
        int col_m = mat[0].size();

        int low = 0;

        int high = col_m - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            // Max in the column

            int row_ind = find_row_index(mat, mid);

            // Max in the col.
            // Now check left and right

            int left = (mid-1 >=0) ? mat[row_ind][mid - 1] : -1;
            int right = (mid+1 < m) ? mat[row_ind][mid + 1] : -1;

            if (mat[row_ind][mid] > left &&
                mat[row_ind][mid] > right) {
                return {row_ind, mid};
            }

            else if (mat[row_ind][mid] < left) {
                high = mid - 1;
            }

            else
                low = mid + 1;
        }

        return {-1, -1};
    }
};



int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    // int target;cin>>target;

    for(int i=0;i<n;++i){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j] << endl;
        }
    }
    Solution sol;
    cout << "Answer is"<<sol.findPeakGrid(matrix);

	return 0;
}