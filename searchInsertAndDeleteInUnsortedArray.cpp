bool search(int arr[],int n,int x)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i] == x)
    {
      return true;
    }
  }
  return false;
}

void insert(int arr[],int n,int x,int pos)
{
  for(int i=n-1;i>=pos;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[pos]=key;
}

int delete(int arr[],int n,int pos)
{
  if(n == 0)
  {
    return 0;
  }
  
  for(int i=pos;i<n;i++)
  {
    arr[i]=arr[i+1];
  }
  n--;
  return n;
}
