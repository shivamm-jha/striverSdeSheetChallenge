#include <bits/stdc++.h> 
#define ll long long
long long merge(long long nums[],long long low , long long mid , long long high){
        long long cnt=0;
        long long x = mid+1;
        for(int i=low;i<=mid;i++){
            while(x<=high && nums[i] > (long long)nums[x]){
                x++;
            }
            cnt+= x - (mid+1);
        }
        
        
        long long n1= mid-low+1 , n2= high -mid;
        vector<int> left(n1,0), right(n2,0);
        for(int i=0;i<n1;i++)left[i]=nums[low+i];
        for(int j=0;j<n2;j++)right[j]=nums[j+mid+1];
        long long i=0, j=0, k=low;
        
        while(i<n1 && j<n2){
            if(left[i]<=right[j]){
                nums[k++]=left[i++];
            }
            else{
                nums[k++]=right[j++];
            }
        }
        
        while(i<n1){
            nums[k++]=left[i++];
        }
        while(j<n2){
            nums[k++]=right[j++];
        }
        
        return cnt;
        
    }
    long long mergesort(long long nums[], long long low , long long high){
        if(low>=high) return 0;
        long long mid = (low+high)/2;
        long long inv = mergesort(nums,low,mid);
        inv += mergesort(nums,mid+1,high);
        inv += merge(nums,low,mid,high);
        return inv;
        
    }

long long getInversions(long long *arr, int n){
    return mergesort(arr,0,n-1);
}