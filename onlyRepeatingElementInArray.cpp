int find(int arr[],int n)
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
  
  return x;
}
