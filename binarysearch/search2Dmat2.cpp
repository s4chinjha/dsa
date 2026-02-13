#include<bits/stdc++.h>
using namespace std;

//Main Function
class Solution{
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Row number
        int n  = matrix.size();
        //column number
        int m = matrix[0].size();

        int row = 0;
        //Last element of the first colmun
        int col = m-1;

        while(row<n && col>=0){

            //If we find the target
            if(matrix[row][col] == target){
                return true;
            }

            else if(matrix[row][col] > target){
                col--;
            }
            else
                row++;
        }
        return false;
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

    int target;cin>>target;

    for(int i=0;i<n;++i){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j] << endl;
        }
    }
    Solution sol;
    cout << "Answer is"<<sol.searchMatrix(matrix,target);
    return 0;
}