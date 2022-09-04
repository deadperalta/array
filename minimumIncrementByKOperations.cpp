int getMax(int arr[],int n)
{
  int maxi=0;
  for(int i=0;i<n;i++)
  {
    maxi=max(maxi,arr[i]);
  }
  return maxi;
}

int op(int arr[],int n,int k)
{
  int maxi=getMax(arr,n);
  
  for(int i=0;i<n;i++)
  {
    if((maxi-arr[i]) % k == 1)
    {
      return -1;
    }
    res+=(maxi-arr[i])/k;
  }
  return res;
}
