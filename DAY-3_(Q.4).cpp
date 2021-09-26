class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==1) return s;
        string ans="";
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()) st.push(s[i]);
            else{
                if(s[i]==st.top()){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};