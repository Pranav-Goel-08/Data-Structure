class Solution {
public:

    int solveRec(vector<int>& cost,int n,vector<int> &dp){
        if(n==0)
            return cost[0];
        
        if(n<0)
            return 0;
        
        if(dp[n]!=-1)
            return dp[n];
        
        int one = solveRec(cost,n-1,dp);
        int two = solveRec(cost,n-2,dp);

        return dp[n] = cost[n] + min(one,two);
    }

    int solveTab(vector<int>& cost,int n){
        vector<int> dp(n+1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2; i<n; i++){
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }

        return min(dp[n-1],dp[n-2]);
    }

    int solveSpace(vector<int> &cost, int n){
        int prev1 = cost[0];
        int prev2 = cost[1];
        
        for(int i=2; i<n; i++){
            int res = cost[i] + min(prev1 , prev2);
            prev1 = prev2;
            prev2 = res; 
        }

        return min(prev1,prev2);
    

    int minCostClimbingStairs(vector<int>& cost) {

        // Recutsion + DP
        // int n = cost.size();
        // vector<int> dp(n+1,-1);
        // return min(solveRec(cost,n-1,dp),solveRec(cost,n-2,dp));

        // Tabulization
        // int n = cost.size();
        // return solveTab(cost,n);

        // Space Optimization
        int n = cost.size();
        return solveSpace(cost,n);
    }
};