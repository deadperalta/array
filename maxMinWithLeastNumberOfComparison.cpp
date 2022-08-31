pair<int,int> maxMin(int arr[],int n)
{
  int maxi,mini;
  int i;
  
  if(n % 2 == 1)
  {
    maxi=arr[0];
    mini=arr[0];
    
    i=1;
  }
  else
  {
    maxi=max(arr[0],arr[1]);
    mini=min(arr[0],arr[1]);
    
    i=2;
  }
  
  while(i < n-1)
  {
    if(arr[i+1] > arr[i])
    {
      maxi=max(maxi,arr[i+1]);
      mini=min(mini,arr[i]);
    }
    else
    {
      maxi=max(maxi,arr[i]);
      mini=min(mini,arr[i+1]);
    }
    i+=2;
  }
  return {mini,maxi};
}
