#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	unordered_map<int,int> umap;
    for(int i=0;i<n;++i){
        umap[arr[i]]++;
        if(umap[arr[i]]> n/2)return arr[i];
    }
    return -1;
    
}