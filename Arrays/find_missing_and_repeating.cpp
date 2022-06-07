#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
//     T.C = N LOG N
    
//     sort(arr.begin(),arr.end());
//     int missing , repeated;
//     int total = 0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]==arr[i+1]){
//             repeated=arr[i];
//              break;
//         }
//     }
    
//    for(auto &it:arr){
//        total+=it;
//    }
    
//     int sum = (n * (n+1))/2;
//     missing = (sum - total) + repeated;
   
    
//     return {missing,repeated};
    
//     T.C = 0(N)
    
    int missing , repeated;
    for(int i=0;i<n;i++){
        int idx = abs(arr[i])-1;
        if(arr[idx]<0){
            repeated = idx+1;
        }
        else arr[idx]*=-1;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            missing = i+1; break;
        }
    }
    
    return {missing,repeated};
}
