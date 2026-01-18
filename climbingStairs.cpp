//Climbing Stairs-Leetcode 70
//TC=O(n)
//SC=O(n) for dp array + O(n) for recursion stack


#include <iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return countways(n,dp);
        
    }
    int countways(int n,vector<int>&dp){
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=countways(n-1,dp)+countways(n-2,dp);
        
    }
};