bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int i=1,j=0,c=1;
    while(i<arrive.size()){
        if(arrive[i]>=depart[j]){
            i++;
            j++;
        }
        else{
            i++;
            c++;
        }
    }
    if(c>K)return false;
return true;
}
