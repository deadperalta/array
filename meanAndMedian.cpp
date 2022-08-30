pair<int,int>meanAndMedian(vector<int>arr)
{
  sort(arr.begin(),arr.end());
  
  int n=arr.size();
  int median;
  
  if(n % 2 == 0)
  {
    median=(arr[n/2]+arr[n/2-1])/2;
  }
  else
  {
    median=arr[n/2];
  }
  
  int sum=0;
  
  for(int i:arr)
  {
    sum+=i;
  }
  
  return {sum/n,median};
}
