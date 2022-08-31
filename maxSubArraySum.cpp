int maxSum(int arr[],int n)
{
  int currSum=0,maxSoFar=INT_MIN;
  
  for(int i=0;i<n;i++)
  {
    currSum=max(currSum+arr[i],arr[i]);
    maxSoFar=max(maxSoFar,currSum);
  }
  return maxSoFar;
}
