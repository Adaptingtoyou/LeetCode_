class Solution {
public:
    vector <string> ans;
    void f(int i, string str, int&n)
    {
        if(i==n)
        {
            ans.push_back(str);
            return;
        }
        if(i ==0 || str.back()=='1')
        {
            f(i+1,str+'0',n);
        }
        f(i+1,str+"1",n);
    }
    vector<string> validStrings(int n) {
        f(0,"",n);
        return ans;
    }
};