bool increasing(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
    if(arr[i] >= arr[i+1])
    {
      return false;
    }
  }
  return true;
}

bool decreasing(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i] <= arr[i+1])
    {
      return false;
    }
  }
  return true;
}

void shortestSubarray(int arr[],int n)
{
  if(increasing(arr,n) || decreasing(arr,n))
  {
    return 0;
  }
  return 3;
}
