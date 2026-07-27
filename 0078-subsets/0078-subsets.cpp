class Solution {
public:
    void solve(vector<int>& nums , int i , int a , vector<int> current_subset, vector<vector<int>>& ans){
        if (i == a) {
            ans.push_back(current_subset);  
            return;
        }
        solve(nums,i+1,a,current_subset,ans);
        current_subset.push_back(nums[i]);
        solve(nums,i+1,a,current_subset,ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int a = nums.size();
        vector<vector<int>> ans;
        vector <int> current_subset;
     solve(nums,0,a,current_subset,ans);
     return ans;
    }
};