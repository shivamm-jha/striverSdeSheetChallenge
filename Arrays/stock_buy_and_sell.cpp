#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    vector<int> right(n);
    right[n-1]=prices[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],prices[i]);
    }
    
    int profit=0;
    for(int i=0;i<n;i++){
        profit = max(profit,right[i]-prices[i]);
    }
    return profit;
    
}