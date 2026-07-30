class Solution {
public:
    void processExpression(stack<long long>& st, long long num, char sign)
{
    if (sign == '+')
    {
        st.push(num);
    }
    else if (sign == '-')
    {
        st.push(-num);
    }
    else if (sign == '*')
    {
        long long value = st.top();
        st.pop();
        st.push(value * num);
    }
    else if (sign == '/')
    {
        long long value = st.top();
        st.pop();
        st.push(value / num);
    }
}
    int helper(string &s, int &i)
    {
        stack<long long> st;
        long long num = 0;
        char sign = '+';
        while (i < s.size())
        {
            if (s[i] == ' ')
            {
                i++;
                continue;
            }
            if (isdigit(s[i]))
            {
                num = num * 10 + (s[i] - '0');
                i++;
                continue;
            }
            if (s[i] == '(')
            {
                i++;
                num = helper(s, i);
                continue;
            }
            if (s[i] == ')')
            {
                processExpression(st, num, sign);
                long long ans = 0;
                while (!st.empty())
                {
                    ans += st.top();
                    st.pop();
                }
                i++;
                return (int)ans;
            }
            processExpression(st, num, sign);
            sign = s[i];
            num = 0;
            i++;
        }
        processExpression(st, num, sign);
        long long ans = 0;
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return (int)ans;
    }
    int calculate(string s)
    {
        int i = 0;
        return helper(s, i);
    }
};