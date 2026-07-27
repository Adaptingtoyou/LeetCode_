class Solution {
public:
    int commonFactors(int a, int b) {
        int ans = 0;
        int c = min(a,b);
        for( int i = 1 ; i<= c ; i++){
            if( a% i != 0 || b% i != 0){
                continue;
            }
            ans++;
        }
        return ans;
        
    }
};