class Solution {
public:
    int kthFactor(int n, int k) {
        int count = 0;
        int root = sqrt(n);
        for(int i = 1 ; i*i <= n ; i++)
        {
            if(n % i != 0) continue;
            count++;
            if(count == k) return i;
        }
        for(int j =root ; j >= 1 ; j--)
        {
            if(n % j != 0 || j == n/j) continue;
            count++;
            if(count == k)
            {
            return n/j;
            }
        }
        return -1;
    }
};