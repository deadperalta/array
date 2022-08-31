void kSmallest(int arr[],int n,int k)
{
  for(int i=k;i<n;i++)
  {
    int maxVar=arr[k-1];
    int pos=k-1;
    
    int j=k-2;
    
    while(j >= 0)
    {
      if(arr[j] > maxVar)
      {
        maxVar=arr[j];
        pos=j;
      }
    }
    
    if(arr[i] < maxVar)
    {
      swap(arr[i],arr[pos]);
    }
  }
  
  for(int i=0;i<k;i++)
  {
    cout<<arr[i]<<" ";
  }
}
