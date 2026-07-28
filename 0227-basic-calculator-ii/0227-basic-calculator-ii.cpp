class Solution {
public:
    int calculate(string s) {
        int n = s.size();
        stack <int> st;
        int num = 0;
        char sign = '+';
        int mult = 0;
        int div = 0;
        for(int i = 0 ; i <= n ; i++){
            if( i < n && s[i] == ' '){
                continue;
            }
             if(isdigit(s[i])){
                num = num*10 + (s[i]-'0');
                continue;
             }
             if(!isdigit(s[i]) || i == n){
             if(sign == '+'){
                st.push(num);
               
             }
             else if(sign == '-'){
                st.push(-num);
              
                
             }
             else if(sign == '*'){
                mult = st.top();
                st.pop();
                st.push(mult*num);
               
                
             }
             else if(sign == '/'){
                div = st.top();
                st.pop();
                st.push(div/num);
               
                
             }
             sign = s[i];
             num = 0;
             }
        }
        int m = st.size();
        int ans = 0;
        for(int i = 0 ; i < m ; i++){
            ans +=st.top();
            st.pop();
        }
        return ans;
    }
};