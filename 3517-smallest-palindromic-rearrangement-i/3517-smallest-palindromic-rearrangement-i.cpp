class Solution {
public:
    string smallestPalindrome(string s) {
        sort(s.begin(),s.end());
        int count = 1;
        string left="";
        string middle = "";
        string right ="";
        string ans="";
        int i = 0;
        int j =0;
        while(i < s.size())
        {
            j=i+1;
            while(  j < s.size() && s[i] == s[j])
            {
                count++;
                j++;
            }
            int n = count / 2;
            if(count % 2 != 0)
            {
                middle.push_back(s[i]) ;
            }
                for(int k = 0 ; k < n ; k++)
                {
                left.push_back(s[i]);
                }
            
            count = 1;
            i = j;
        }
        right = left;
        reverse(right.begin(),right.end());
        ans = left + middle + right;
        return ans;
    }
};