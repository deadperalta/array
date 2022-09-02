int binarySearch(int arr[],int l,int h,int k)
{
  while(l <= h)
  {
    int mid=l+((h-l)>>1);
    
    if(arr[mid] == k)
    {
      return mid;
    }
    
    if(arr[mid] > k)
    {
      h=mid-1;
    }
    else
    {
      l=mid+1;
    }
  }
  return -1;
}

int inInfinte(int arr[],int key)
{
  int l=0;
  int h=1;
  
  int val=arr[0];
  
  while(val < key)
  {
    l=h;
    h=2*h;
    val=arr[h];
  }
  
  return binarySearch(arr,l,h,key);
}
