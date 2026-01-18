//Frog Jump - Memoization Approach(gfg)
//TC=O(n)
//SC=O(n) for dp array + O(n) for recursion stack

#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
class Solution {
  public:
    int f(int n,vector<int>&heights,vector<int>&dp){
        if(n==0)return 0;
        if(dp[n]!=-1) return dp[n];
        int left=f(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
        int right=INT_MAX;
        if(n>1) right=f(n-2,heights,dp)+abs(heights[n]-heights[n-2]);
        return dp[n]=min(left,right);
    }
    int minCost(vector<int>& height) {
        int n=height.size();
        vector<int>dp(n+1,-1);
        return f(n-1,height,dp);
        
        
    }
};