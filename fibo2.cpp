//TC=O(n)
//SC=O(n) for dp array
#include <iostream>
using namespace std;
#include<vector>
int f(int n,vector<int> &dp){
    dp[0]=0;dp[1]=1;
    for(int i=2;i<=n;i++){
       dp[i]=dp[i-1]+dp[i-2]; 
    }
    return dp[n];
    
}
int main() {
    int n;
    cout<<"Enter Number:";
    cin >> n;
    vector<int> dp(n+1,-1);
    cout<< f(n,dp);

    return 0;
}