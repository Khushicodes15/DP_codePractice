//Frog Jump - Space Optimized Tabulation Approach(gfg)
 //TC=O(n)
 //SC=O(1)
#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
class Solution {
  public:
    int minCost(vector<int>& height) {
        int n=height.size();
        int prev=0;
        int prev2=0;
        for(int i=1;i<n;i++){

            int left=prev +abs(height[i]-height[i-1]);
            int right=INT_MAX;
            if(i>1) right=prev2 +abs(height[i]-height[i-2]);
            
            int curri=min(left,right);
            prev2=prev;
            prev=curri;
        }
        return prev;
        
    }
};