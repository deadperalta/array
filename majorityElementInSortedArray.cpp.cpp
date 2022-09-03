int lastInd(int arr[],int n,int low,int key)
{
  int ans=0;
  
  int high=n-1;
  
  while(low <= high)
  {
    int mid=low+((high-low)>>1);
    
    if(arr[mid] == key)
    {
      ans=mid;
      low=mid+1;
    }
    else 
    {
      high=mid-1;
    }
  }
  return ans;
}
int mjeInSortedArray(int arr[],int n)
{
  int count=0;
 
  int i=0;
  
  while(i<n)
  {
    int li=lastInd(arr,n,i,arr[i]);
    if(li-i+1 > n/2)
    {
      return arr[i];
    }
    i=li+1;
  }
  return -1;
}
