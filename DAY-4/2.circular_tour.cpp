/*You are required to complete this method*/
class Solution{
  public:
  int tour(petrolPump p[],int n)
    {
       int s=0,e=1,cur= p[s].petrol - p[s].distance;
    while (e!=s||cur<0)
    {
        while(cur<0 && s!=e)
        {
            cur-=p[s].petrol-p[s].distance;
            s=(s+1) % n;
            if (s==0)
            return -1;
        }
        cur+= p[e].petrol - p[e].distance;
        e=(e+1) % n;
    }
    return s;
    }
};
