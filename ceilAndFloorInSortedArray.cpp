int floor(int arr[],int n,int x)
{
  int low=0;
  int high=n-1;
  
  int ans=-1;
  
  while(low <= high)
  {
    int mid=low+((high-low)>>1);
    
    if(arr[mid] == x)
    {
      return x;
    }
    
    if(arr[mid] > x)
    {
      ans=arr[mid];
      high=mid-1;
    }
    else
    {
      low=mid+1;
    }
  }
  return ans;
}

int ceil(int arr[],int n,int x)
{
  int low=0;
  int high=n-1;
  
  int ans=-1;
  
  while(low <= high)
  {
    int mid=low+((high-low)>>1);
    
    if(arr[mid] == x)
    {
      return x;
    }
    
    if(arr[mid] < x)
    {
      ans=arr[mid];
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
  return ans;
}

pair<int,int>floorAndCeil(int arr[],int n,int x)
{
  if(arr[0] > x)
  {
    return {-1,arr[0]};
  }
  if(arr[n-1] < x)
  {
    return {arr[n-1],-1};
  }
  
  return {floor(arr,n,x),ceil(arr,n,x)};
}
