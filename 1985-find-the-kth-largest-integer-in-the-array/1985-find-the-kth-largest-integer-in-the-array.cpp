class Solution {
public:
    static bool cmp(string &a, string &b) {
        if (a.size() != b.size()) {
            return a.size() < b.size();
        }
        return a < b;
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.begin() + n,cmp);
        return nums[nums.size()-k];
    }
};