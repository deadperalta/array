void change(int arr[],int n,int d)
{
  int ans[n];
  int k=0;
  for(int i=d;i<n;i++)
  {
    ans[k]=arr[i];
    k++;
  }
  for(int i=0;i<d;i++)
  {
    ans[k]=arr[i];
  }
  arr=ans;
}
