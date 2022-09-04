int numberOfSubarrays(vector<int>&arr,int n,int k)
{
  int st=0;
  long long int prod=1;
  int ans=0;
  
  for(int en=0;en<n;en++)
  {
    prod*=arr[en];
    
    if(prod == k)
    {
      ans++;
    }
    
    if(prod > k)
    {
      while(st < en && prod > k)
      {
        prod/=arr[st];
        st++;
      }
      
      if(prod == k)
      {
        ans++;
      }
    }
  }
  return ans;
}
