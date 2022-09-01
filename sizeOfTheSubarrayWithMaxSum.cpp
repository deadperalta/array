int maxSize(int arr[],int n)
{
  int currSum=0;
  int maxSum=INT_MIN;
  
  int st=0;
  int en=0;
  int s=0;
  
  for(int i=0;i<n;i++)
  {
    currSum+=arr[i];
    
    if(currSum > maxSum)
    {
      start=s;
      en=i;
      maxSum=currSum;
    }
    
    if(currSum < 0)
    {
      currSum=0;
      s=i+1;
    }
  }
  return en-start+1;
}
