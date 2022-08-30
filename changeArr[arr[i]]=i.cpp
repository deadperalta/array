void arrange(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int j=arr[i]%n;
    
    arr[j]=(n*i+arr[j]);
  }
  
  for(int i=0;i<n;i++)
  {
    arr[i]=(arr[i]/n);
  }
}
