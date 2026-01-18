//Climbing Stairs-Leetcode 70
//TC=O(n)
//SC=O(n) for dp array

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
        dp[0]=1;dp[1]=1;
        for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]; 
        }
        return dp[n];
        
    }
};