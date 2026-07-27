class Solution {
public: 
    int solve(vector<int>& nums,int i,int n, vector<int> subset,int y,int& ans){
        if(i == n){
            for(int j : subset){
                y = y^j;
            
            }
            return ans = ans + y;
        }
        solve(nums,i+1,n,subset,y,ans);
        subset.push_back(nums[i]);
        solve(nums,i+1,n,subset,y,ans);
        return ans;
    }
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> subset;
        int y = 0;
        int ans = 0;
        return solve(nums,0,n,subset,y,ans);
    }

};