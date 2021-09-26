class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        int n=s.size(),i=0;
        while(i<n)
        {
            if( ( s[i]=='(' ) || ( s[i]=='[' ) || ( s[i]=='{' ) )
            { st.push(s[i]); }
             else if (!st.empty())
            {
                if (s[i] == '}' or s[i] == ']' or s[i] == ')')
                {
                    if ((s[i] == '}' && st.top() == '{') || (s[i] == ')' && st.top() == '(') || (s[i] == ']' && st.top() == '['))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else if(st.empty())
            {
                st.push(s[i]);
            }
            i++;
        }
        if(!st.empty())return false;
        return true;
    }
};
