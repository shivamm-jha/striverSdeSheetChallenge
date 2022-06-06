#include <bits/stdc++.h> 

long long maxSubarraySum(int arr[], int n)
{
    long long maxSum =0;
    long long ans = 0;
    for(int i=0;i<n;i++){
        maxSum+=arr[i];
        ans= max(ans,maxSum);
        if(maxSum<0)maxSum=0;
    }
    return ans;
}