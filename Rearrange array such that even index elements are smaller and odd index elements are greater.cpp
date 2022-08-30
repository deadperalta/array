void rearrange(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
    if(i % 2 == 0)
    {
      if(arr[i+1] < arr[i])
      {
        swap(arr[i+1],arr[i]);
      }
    }
    else
    {
      if(arr[i+1] > arr[i])
      {
        swap(arr[i+1],arr[i]);
      }
    }
  }
}
