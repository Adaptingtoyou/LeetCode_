class Solution {
public:
    bool solve(int index , vector<int> & side, vector<int>& matchsticks ,int target)
{
    if(index == matchsticks.size())
    {
        return side[0] == target && side[1] == target && side[2] == target && side[3] == target;
    }
    for(int i = 0 ; i < 4 ; i++)
    {
        if(side[i] + matchsticks[index] > target) continue;
        if((side[i] + matchsticks[index]) <= target)
        {
            side[i] += matchsticks[index];
            bool ans =solve(index+1,side,matchsticks,target);
            if(ans) return true;
            side[i] -= matchsticks[index];
        }
    }
    return  false;
}
    bool makesquare(vector<int>& matchsticks) {
        vector<int> side(4,0);
        int index = 0;
        int sum = 0;
        sort(matchsticks.rbegin(), matchsticks.rend());
        for(auto k: matchsticks)
        {
            sum +=k;
        }
        if(sum % 4 != 0)
        {
            return false;
        }
        int target = sum/4;
        return solve(index,side,matchsticks , target);
    }
};