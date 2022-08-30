void rearrange(int arr[],int n)
{
  int start=0;
  int end=n-1;
  
  int i=0;
  while(i < end)
  {
    if(arr[i] < 0)
    {
      swap(arr[i],arr[start]);
      start++;
      i++;
    }
    else
    {
      swap(arr[i],arr[end]);
      end--;
    }
  }
}
