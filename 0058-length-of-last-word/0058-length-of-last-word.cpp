class Solution {
public:
    int solve(string s , int n , int& count , bool started){
       if(n<0){
        return count;
       }
          if (!started && s[n] == ' ') {
            return solve(s, n - 1, count, false);
        }
        if (s[n] == ' ') {
            return count;
        }
        count++;
        return solve(s, n - 1, count, true);
    }
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        return solve(s,n-1,count,false);
    }
};