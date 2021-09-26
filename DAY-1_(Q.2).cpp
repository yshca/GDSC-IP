vector<int> Solution::plusOne(vector<int> &A) 
{  int l=A.size()-1;
    for(int i=l;i>=0;i--)
    {
        if(A[i]!=9)
        {A[i]+=1; break;} 
        else
        A[i]=0;
        if(i==0 && A[i]==0)
        A.insert(A.begin(),1);
        
    }
    for(int i=0;i<l;i++)
    {
        if(A[0]==0)
      { vector<int>::iterator it;
        it = A.begin();
        A.erase(it);}
        else
        break;
    }
    return A;
}
