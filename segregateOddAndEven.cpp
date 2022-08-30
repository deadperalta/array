void segregate(int arr[],int n)
{
  int start=0;
  
  for(int i=0;i<n;i++)
  {
    if(arr[i] % 2 == 0)
    {
      swap(arr[start],arr[i]);
      start++;
    }
  }
}
