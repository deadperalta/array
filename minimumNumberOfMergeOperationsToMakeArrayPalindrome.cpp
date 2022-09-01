int minMerge(int arr[],int n)
{
  int i=0,j=n-1;
  
  while(i < j)
  {
    if(arr[i] == arr[j])
    {
      i++;
      j--;
    }
    else if(arr[i] > arr[j])
    {
      arr[j-1]+=arr[j];
      j--;
      res++;
    }
    else
    {
      arr[i+1]+=arr[i];
      i++;
      res++;
    }
  }
  return res;
}
