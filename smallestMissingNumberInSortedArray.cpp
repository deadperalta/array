int smallestMissing(vector<int>arr)
{
  int n=arr.size();
  
  int low=0;
  int high=n-1;
  
  int ans=n;
  
  while(low <= high)
  {
    int mid=low+((high-low)>>1);
    
    if(arr[mid] != mid)
    {
      ans=mid;
      high=mid-1;
    }
    else
    {
      high=mid+1;
    }
  }
  return ans;
}
