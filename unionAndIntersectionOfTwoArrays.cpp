void Union(int a[],int m,int b[],int n)
{
  int maxe=max(a[m-1],b[n-1]);
  int present[maxe+1];
  cout<<"UNion Of Two Arrays Are="<<endl;
  for(int i=0;i<m;i++)
  {
    if(present[a[i]] == 0)
    {
      cout<<a[i]<<" ";
      present[a[i]]++;
    }
  }
  
  for(int i=0;i<n;i++)
  {
    if(present[b[i]] == 0)
    {
      cout<<b[i]<<" ";
      present[b[i]]++;
    }
  }
}

void intersection(int a[],int m,int b[], int n)
{
  int maxe=max(a[m-1],b[n-1]);
  int present[maxe+1];
  cout<<"Intersection Of Two Arrays Are="<<endl;
  for(int i=0;i<m;i++)
  {
    if(present[a[i]] == 0)
    {
      present[a[i]]++;
    }
  }
  
  for(int i=0;i<n;i++)
  {
    if(present[b[i]] == 1)
    {
      cout<<b[i]<<" ";
      present[b[i]]--;
    }
  }
}

void doOperation(int a[],int m,int b[],int n)
{
  Union(a,m,b,n);
  intersection(a,m,b,n);
}
