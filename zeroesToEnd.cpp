void zeroesToEnd(int arr[])
{
  int end=n-1;
  int i=0;
  
  while(i < end)
  {
    if(arr[i] == 0)
    {
      swap(arr[i],arr[end]);
      end--;
    }
    i++;
  }
}
