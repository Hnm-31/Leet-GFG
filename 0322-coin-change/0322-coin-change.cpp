class Solution {
public:
    int solve (int idx,vector<int>& coins,int amount,vector<vector<int>> &dp ){
        if(idx>=coins.size()) return 1e9;
        if(amount ==0) return 0;
        if(dp[idx][amount] != -1) return dp[idx][amount];
        int take =1e9;
        if(amount>=coins[idx]){
            take= 1 + solve(idx,coins,amount-coins[idx],dp);
        }

        int ntake= solve(idx+1,coins,amount,dp);
        return dp[idx][amount]=min(take,ntake);
    }

    int coinChange(vector<int>& coins, int amount) {
         
         vector<vector<int>> dp (coins.size(),vector<int>(amount+1,-1));
           
           int ans = solve(0,coins,amount,dp);
           if(ans==1e9) return -1;
        return ans;
    }
};