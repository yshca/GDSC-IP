void SortedStack :: sort()
{
  stack<int> temp;
  while(!s.empty()){
    int t=s.top(); s.pop();
    while(!temp.empty()&&temp.top()>t){
        s.push(temp.top()); temp.pop();
    }temp.push(t);
  }
  s=temp;
}