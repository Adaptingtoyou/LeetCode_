
class Solution {
public:
    int solve(int j , int n , vector<int>& costs, vector<int>& dp)
    {
        if(j==n)
        {
            return 0;
        }
        if(dp[j] != -1)
        {
            return dp[j];
        }
        int x = INT_MAX;
        int y = INT_MAX;
        int z = INT_MAX;
        if (j + 1 <= n)
        {
         x = solve(j+1,n,costs,dp)+ costs[j] + 1;
        }
        if (j + 2 <= n)
        {
         y = solve(j+2,n,costs,dp)+ costs[j+1] + 4;
        }
        if (j + 3 <= n)
        {
         z = solve(j+3,n,costs,dp)+ costs[j+2] + 9;
        }
        return dp[j] = min(x,min(y,z));
    }
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1,-1);
        return solve(0,n,costs,dp);
    }
};