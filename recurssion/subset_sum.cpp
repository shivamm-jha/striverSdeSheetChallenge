
void solve(vector<int> & nums, int i,int sum, vector<int> &empty){
    if(i==nums.size()){
        empty.push_back(sum);
        return;
    }
//     pick
    sum+=(nums[i]);
    solve(nums,i+1,sum,empty);
    sum-=nums[i];
    
//      dont pick
    solve(nums,i+1,sum,empty);

}
vector<int> subsetSum(vector<int> &nums)
{
   
    vector<int> empty;
    solve(nums,0,0,empty);
    
    
    sort(empty.begin(),empty.end());
    return empty;
}