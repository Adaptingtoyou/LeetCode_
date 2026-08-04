class Solution {
public:
    int kthFactor(int n, int k) {
        int count = 0 ;
        for(int i = 1 ; i <= n ; i++)
        {
            if( n % i != 0) continue;
            
                count++;
                if(count == k)
                {
                    return i;
                }
                if(i == n && count <  k) return -1;
            
        }
        return -1;
    }
};