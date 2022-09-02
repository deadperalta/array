void merge(int a[],int m,int b[],int n)
{
  int j=0;
  
  for(int i=0;i<m;i++)
  {
    if(a[i] == -1)
    {
      swap(a[j],a[i]);
      j++;
    }
  }
  
  int i=j-1;
  int k=n-1;
  j=m-1;
  
  while(i >= 0 && k >= 0)
  {
    if(a[i] < b[k])
    {
      a[j]=b[k];
      j--;
      k--;
    }
    else
    {
      a[j]=b[i];
      j--;
      i--;
    }
  }
  
  while(i >= 0)
  {
    a[j]=b[i];
    j--;
    i--;
  }
  
  while(k >= 0)
  {
    a[j]=b[k];
    j--;
    k--;
  }
}
