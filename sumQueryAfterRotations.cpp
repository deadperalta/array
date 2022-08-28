vector<int>sumAfterRotation(vector<int>&arr,vector<vector<int>>&query)
{
  int n=arr.size();
  int nr=0;
  
  vector<int>pf(n);
  pf[0]=arr[0];
  
  for(int i=1;i<n;i++)
  {
    pf[i]=pf[i-1]+arr[i];
  }
  
  for(auto q:queries)
  {
    int type=q[0];
    
    if(type == 1)
    {
      nr-=q[1];
    }
    else if(type == 2)
    {
      nr+=q[1];
    }
    else
    {
      int l=(q[1]-nr+n)%n;
      int r=(q[2]-nr+n)%n;
      
      int sum;
      
      if(l > r)
      {
        sum=pf[n-1]-pf[l-1]+pf[r];
      }
      else
      {
        if(l > 0)
        {
          sum=pf[r]-pf[l-1];
        }
        else
        {
          sum=pf[r];
        }
      }
      ans.push_back(sum);
    }
  }
  return ans;
}
