#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	int ans;
    for(int i=0;i<n;i++){
        int idx = abs(arr[i]);
        if(arr[idx]<0){
            ans= idx; break;
        }
        else{
            arr[idx]*=-1;
        }
    }
    return ans;
}
