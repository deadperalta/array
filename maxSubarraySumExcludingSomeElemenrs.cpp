int maxSum(int arr[],int n,int b[],int m)
{
  unordered_set<int>vis;
  
  for(int i=0;i<m;i++)
  {
    vis.insert(b[i]);
  }
  
  int msf=INT_MIN;
  int s=0;
  
  for(int i=0;i<n;i++)
  {
    if(vis.find(arr[i]) != vis.end())
    {
      s=0;
      continue;
    }
    s=max(arr[i],s+arr[i]);
    msf=max(msf,s);
  }
  return msf;
}
