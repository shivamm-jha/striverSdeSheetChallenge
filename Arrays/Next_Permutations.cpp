#include <bits/stdc++.h> 
void solve(vector<int> & nums, int n){
    int firstVal = -1 , swapVal = -1;
    for(int i=n-2;i>=0;i--){
        if(nums[i] < nums[i+1]){
            firstVal = i;
            break;
        }
    }
    
    if(firstVal!=-1){
        for(int i=n-1;i>=0;i--){
            if(nums[i]> nums[firstVal]){
                swapVal = i; break;
            }
        }
    }
    
    if(firstVal!=-1 && swapVal!=-1)swap(nums[firstVal], nums[swapVal]);
    reverse(nums.begin()+firstVal+1, nums.end() );

}
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    solve(permutation,n);
    return permutation;
    
}