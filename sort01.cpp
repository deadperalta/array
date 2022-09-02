void sort01(int arr[],int n)
{
  int st=0;
  
  for(int i=0;i<n;i++)
  {
    if(arr[i] == 0)
    {
      swap(arr[i],arr[st]);
      st++;
    }
  }
}
