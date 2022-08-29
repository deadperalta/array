bool pairSum(vector<int>&arr,int sum)
{
  int r,l;
  
  int i=0;
  
  while(i < arr.size())
  {
    if(arr[i+1] < arr[i])
    {
      r=i;
      l=i+1;
      break;
    }
  }
  
  while(l != r)
  {
    int sum=arr[l]+arr[r];
    
    if(sum == target)
    {
      return true;
    }
    
    if(sum > target)
    {
      r=(r-1+arr.size())%arr.size();
    }
    else
    {
      l=(l+1)%arr.size();
    }
  }
  return false;
}
