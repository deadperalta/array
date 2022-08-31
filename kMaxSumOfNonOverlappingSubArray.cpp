vector<int> kmax(int arr[],int n,int k)
{
  vector<int>ans;
  
  for(int i=0;i<k;i++)
  {
    int maxSoFar=INT_MIN;
    int currMax=0;
    
    for(int i=0;i<n;i++)
    {
      currMax+=arr[i];
      
      if(currMax > maxSoFar)
      {
        start=s;
        end=i;
      }
      
      if(currMax < 0)
      {
        currMax=0;
        start=i+1;
      }
    }
    
    ans.push_back(maxSoFar);
    
    for(int i=start;i<=end;i++)
    {
      arr[i]=INT_MIN;
    }
  }
  return ans;
}
