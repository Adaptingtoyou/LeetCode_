class Solution {
public:
    bool solve(int left , int right , vector<int>& nums , int p1 , int p2 , bool player1)
    {
        if(left>right)
        {
            return p1 >= p2;       

         }
         if(player1)
         {
         bool takeleft = solve(left+1,right,nums,p1+nums[left],p2,false);
         bool takeright = solve(left,right-1,nums,p1+nums[right],p2,false);
         return takeleft || takeright;
         }
         else
         {
         bool takeleft = solve(left+1,right,nums,p1,p2+nums[left],true);
         bool takeright = solve(left,right-1,nums,p1,p2+nums[right],true);
         return takeleft && takeright;
         }
    }
    bool predictTheWinner(vector<int>& nums) {
        return solve(0,nums.size()-1,nums,0,0,true);
    }
};