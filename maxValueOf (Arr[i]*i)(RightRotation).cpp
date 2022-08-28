int maxVal(vector<int>&arr)
{
  int init=0;
  int sum=0;
  
  for(int i=0;i<arr.size();i++)
  {
    init+=(arr[i]*i);
    sum+=arr[i];
  }
  
  int ans=init;
  
  for(int i=0;i<arr.size();i++)
  {
    init=init+sum;
    init=init-(arr[i]*arr.size());
    ans=max(ans,init);
  }
  return ans;
}
