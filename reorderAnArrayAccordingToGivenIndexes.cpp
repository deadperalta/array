void rearrange(int arr[],int ind[],int n)
{
  for(int i=0;i<n;i++)
  {
    while(ind[i] != i)
    {
      int atTargetVal=arr[ind[i]];
      int atTargetPos=ind[ind[i]];
      
      arr[ind[i]]=arr[i];
      ind[ind[i]]=ind[i];
      
      arr[i]=atTargetVal;
      ind[i]=atTargetPos;
    }
  }
}
