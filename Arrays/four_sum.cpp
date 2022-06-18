#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = target-(arr[i]+arr[j]);
//             cout<<sum<<endl;
            int l = j+1 , r = n-1;
            while(l<r){
                if(arr[l]+arr[r]==sum){
                    return "Yes";
                }
                else if(arr[l]+arr[r]>sum)r--;
                else l++;
            }
        }
    }
    return "No";
}
