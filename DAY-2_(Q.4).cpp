    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack <int> stac;
    unordered_map<int, int> next;

    for(int i = 0; i < nums2.size(); i++)
    {
        while(!stac.empty() &&  nums2[i]> nums2[stac.top()]){
            next[nums2[stac.top()]] = nums2[i];
            stac.pop();
        }
        stac.push(i);
    }
    
    while(!stac.empty()){
        next[nums2[stac.top()]] = -1;
        stac.pop();
    }
    
    vector<int> ans;
    for(int i = 0; i < nums1.size(); i++){
        ans.push_back(next[nums1[i]]);
        
    }
    return ans;
}