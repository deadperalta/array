void rearrange(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int key=arr[i];
    
    if(key < 0)
    {
      int j=i-1;
      
      while(j > 0 && arr[j] > 0)
      {
        arr[j+1]=arr[j];
        j--;
      }
      arr[j]=key;
    }
  }
}
