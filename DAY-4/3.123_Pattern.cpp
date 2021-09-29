class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        int mn[n]; 
        stack<int> s;
        mn[0]=nums[0];
        for(int i=1;i<n;i++){
            mn[i]=min(mn[i-1],nums[i]);
        }
        for(int j=n-1;j>=0;j--){
            if(nums[j]>mn[j]){
                while(!s.empty() && s.top()<=mn[j])
                    s.pop();
                if(!s.empty() && s.top()<nums[j])
                    return true;
                s.push(nums[j]);
            }
        }
        return false;
    }
};