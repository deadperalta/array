void rearrange(int arr[],int n)
{
  int i=0;
  
  for(int j=0;j<n;j++)
  {
    if(arr[j] < 0)
    {
      swap(arr[i],arr[j]);
      i++;
    }
  }
  
  int pos=i;
  int neg=1;
  
  while(pos < n && neg < pos && arr[neg] < 0)
  {
    swap(arr[pos],arr[neg]);
    pos++;
    neg+=2;
  }
}
