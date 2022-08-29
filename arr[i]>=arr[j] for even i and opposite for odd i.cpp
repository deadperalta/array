void rearrange(int arr[],int n)
{
  int temp[n];
  
  for(int i=0;i<n;i++)
  {
    temp[i]=arr[i];
  }
  
  sort(temp,temp+n);
  
  int oddPos=floor(n/2)-1;
  
  int i=1;
  
  while(i < n)
  {
    arr[i]=temp[oddPos--];
    i+=2;
  }
  
  int evenPos=floor(n/2);
  
  i=0;
  
  while(i < n)
  {
    arr[i]=temp[evenPos++];
    i+=2;
  }
}
