class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        vector<vector<int>>vis(n,vector<int>(n,0));
        for(int i = 0; i<n ; i++){
            if(vis[i][i] == 0){
                sum+=mat[i][i];
                vis[i][i] =1;
            }
        
            if(vis[n-1-i][i] == 0){
                sum+=mat[n-1-i][i];
                vis[n-1-i][i]=1;
            }
            
        }
        return sum;
    }
};