pair<int,int>2Repeating(int arr[],int n)
{
  int x=0;
  
  for(int i=0;i<n;i++)
  {
    x^=arr[i];
  }
  
  for(int i=1;i<=n;i++)
  {
    x^=i;
  }
  
  int lsb=0;
  
  while(true)
  {
    if(x & (1 << lsb))
    {
      break;
    }
    lsb++;
  }
  
  int first=0,second=0;
  
  for(int i=0;i<n;i++)
  {
    if(arr[i] & (1 << lsb))
    {
      first^=arr[i];
    }
    else
    {
      second^=arr[i];
    }
  }
  
  for(int i=1;i<=n;i++)
  {
    if(i & (1 << lsb))
    {
      first^=i;
    }
    else
    {
      second^=i;
    }
  }
  
  return {first,second};
}
