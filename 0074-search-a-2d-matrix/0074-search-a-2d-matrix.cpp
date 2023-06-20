class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>ans;
        int n =matrix.size();
        int m =matrix[0].size();
        for( int i =0;i<n ;i++){
            for( int j =0;j<m;j++){
                ans.push_back(matrix[i][j]);
            }
        }
        int l=0;
        int h = m*n-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(target == ans[mid]){
                return true;
            }
            else if(target < ans[mid]){
                h =mid -1;
            }
            else{
                l= mid+1;
            }
        }
        return false;
    }
};