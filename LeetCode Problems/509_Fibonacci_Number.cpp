// Memoization

class Solution {
public:
    int fibo(int n , vector<int> &dp){
        if(n<=1){
            return n;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        dp[n] = fibo(n-1,dp) + fibo(n-2,dp);
        return dp[n];
    }
    int fib(int n) {
        vector<int> dp(n+1);
        for(int i=0 ; i<=n ;i++){
            dp[i] = -1;
        }
        return fibo(n,dp);
    }
};


/*

Tabulation :

class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1,0);
        for(int i=0;i<=n;i++){
            if(i==0 || i==1){
                dp[i] = i;
            }
            else{
                dp[i] = dp[i-1] + dp[i-2];
            }
        }
        return dp[n];
    }
}; */

/*
Space Optimisation

class Solution {
public:
    int fib(int n) {
        int prev1 = 1;
        int prev2 = 0;
        if(n==0){
            return 0;
        }
        for(int i=2;i<=n;i++){
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

*/