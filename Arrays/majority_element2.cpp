#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
   vector<int> ans;
   unordered_map<int,int>umap;
   for(int i=0;i<arr.size();++i){
       umap[arr[i]]++;
       
   }
    for(auto &it:umap){
        if(it.second> arr.size()/3){
           ans.push_back(it.first);
       }
    }
    return ans;

}