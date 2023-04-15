class Solution {
public:
    int f(int ind,int trans,int k,vector<int>&prices,int n,vector<vector<int>>&dp){
        if(ind==n || trans==2*k)return 0;
        if(dp[ind][trans]!=-1)return dp[ind][trans];
        if(trans%2==0){
            return dp[ind][trans]= max(-prices[ind]+f(ind+1,trans+1,k,prices,n,dp),0+f(ind+1,trans,k,prices,n,dp));
        }else{
            return dp[ind][trans] = max(prices[ind]+f(ind+1,trans+1,k,prices,n,dp),0+f(ind+1,trans,k,prices,n,dp));
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2*k,-1));
        return f(0,0,k,prices,n,dp);
    }
};