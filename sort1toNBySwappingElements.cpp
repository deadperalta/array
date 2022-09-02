void swapSort(int arr[],int n,int b[],int m)
{
  for(int i=0;i<n-1;i++)
  {
    if(arr[i] != i+1)
    {
      swap(arr[i],arr[i+1]);
    }
  }
  
  for(int i=;i<n;i++)
  {
    if(arr[i] != i+1)
    {
      return false;
    }
  }
}
