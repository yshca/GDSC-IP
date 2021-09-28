class Solution {
public:
    int calculate(string s) {
        int ans = 0, sign = 1;
        stack <int> n, symbl;
        for(int i = 0; i < s.size(); ++i) {
            if(isdigit(s[i])) {
                int num = 0;
                while(isdigit(s[i])) {
                    num = (s[i] - '0') + num * 10;
                    ++i;
                }
                ans += sign * num;                    
                --i;
            }
            else if(s[i] == '+') sign =  1;
            else if(s[i] == '-') sign = -1;
            else if(s[i] == '(') {
                n.push(ans);
                symbl.push(sign);
                ans = 0;
                sign = 1;
            }
            else if(s[i] == ')') {
                ans = ans * symbl.top() + n.top();
                n.pop();
                symbl.pop();
            }
        }
        return ans;
    }
};