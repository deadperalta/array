bool search(int arr[],int n,int x)
{
  int low=0,high=n-1;
  
  while(low <= high)
  {
    int mid=low+((high-low)>>1);
  
    if(arr[mid] == x)
    {
      return true;
    }
    
    if(arr[mid] > x)
    {
      high=mid-1;
    }
    else
    {
      low-mid+1;
    }
  }
  return false;
}

int insert(int arr[],int n,int x)
{
  int i;
  for(i=n-1;i>=0 && arr[i] > x;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[i]=x;
}

int delete(int arr[],int n,int key)
{
      int pos = search(arr, n, key);
 
      if (pos == -1)
      {
          cout << "Element not found";
          return n;
      }

      // Deleting element
      int i;
      for (i = pos; i < n - 1; i++)
          arr[i] = arr[i + 1];

      return n - 1;
}
