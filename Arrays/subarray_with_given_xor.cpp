#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    
    int ans = 0;
//     for(int i=0;i<arr.size();i++){
//         int curr = 0;
//         for(int j=i;j<arr.size();j++){
//             curr^=arr[j];
//             if(curr==x)ans++;
//         }
//     }
//     return ans;
    
    unordered_map<int,int> umap;
    int t=0;
    for(auto &it : arr){
        t^=it;
        
        if(t==x)ans++;
        int a = x^t;
        if(umap.find(a)!=umap.end())ans+=umap[a];
        umap[t]++;
    }
return ans;
   
}