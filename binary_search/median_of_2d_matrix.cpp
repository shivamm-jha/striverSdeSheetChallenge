#include<bits/stdc++.h>
int search(vector<int>&nums, int key){
    int low = 0 , high = nums.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]<=key){
            ans= mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    return ans;
}
int getMedian(vector<vector<int>> &matrix)
{
    int maxi =INT_MIN, mini = INT_MAX;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++){
        if(matrix[i][m-1] >maxi){
            maxi= matrix[i][m-1];
        }
        if(matrix[i][0] < mini){
            mini = matrix[i][0];
        }
    }
    int cnt = (n*m+1)/2;
    while(mini<maxi){
        int mid = (mini+maxi)/2;
        int place =0;
        for(int i=0;i<n;i++){
            place+= search(matrix[i],mid)+1;
        }
        if(place < cnt){
            mini = mid+1;
        }
        else{
            maxi = mid;
        }
    }
    return mini;
}