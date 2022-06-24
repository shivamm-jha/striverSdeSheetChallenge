#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int count =1 , ans= 1;
    int i=0;
    while(i<n){
        if(arr[i+1]-arr[i]==1){
            count++;
            i++;
        }
        else if(arr[i+1]-arr[i]==0)i++;
        else{
            ans =  max(ans,count);
            count = 1;
            i++;
        }
    }
    return ans;
}