    int merge(vector<int>&nums,int low , int mid , int high){
        int cnt=0;
        int x = mid+1;
        for(int i=low;i<=mid;i++){
            while(x<=high && nums[i] > (long long) 2*nums[x]){
                x++;
            }
            cnt+= x - (mid+1);
        }
        
        
        int n1= mid-low+1 , n2= high -mid;
        vector<int> left(n1,0), right(n2,0);
        for(int i=0;i<n1;i++)left[i]=nums[low+i];
        for(int j=0;j<n2;j++)right[j]=nums[j+mid+1];
        int i=0, j=0, k=low;
        
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
    int mergesort(vector<int>& nums, int low , int high){
        if(low>=high) return 0;
        int mid = (low+high)/2;
        int inv = mergesort(nums,low,mid);
        inv += mergesort(nums,mid+1,high);
        inv += merge(nums,low,mid,high);
        
        return inv;
        
    }
    int reversePairs(vector<int>& nums) {
       return mergesort(nums,0,nums.size()-1);
        
    }