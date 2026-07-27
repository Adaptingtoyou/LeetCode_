class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int largest = INT_MIN;
        int secondlargest = INT_MIN;
        for(int i = 0 ; i < n ;i++){
            if(largest<=nums[i]){
                secondlargest = largest;
                largest = nums[i];
            }
            else if(secondlargest < nums[i]){
                secondlargest = nums[i];
            }
        }
        return (secondlargest - 1)*(largest - 1);
    }
};