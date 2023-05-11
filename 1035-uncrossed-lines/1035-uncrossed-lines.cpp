class Solution {

   public:
    vector<vector<int>>dp;
    int fun(int i ,int j  ,vector<int>&nums1,vector<int>&nums2){
        if(i == -1 || j == -1)return 0; 
        
        if(dp[i][j] != -1)return dp[i][j];
        
        if(nums1[i] == nums2[j]){
            dp[i][j] = 1 + fun(i-1 ,j-1 , nums1 , nums2);
        }
        else{
           dp[i][j] = max(fun(i-1 , j , nums1 ,nums2),fun(i , j-1 ,nums1 ,nums2));
        }
        return dp[i][j];
    }   
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        dp.resize(n,vector<int>(m,-1));
        return fun(n-1,m-1,nums1,nums2);
    }
};