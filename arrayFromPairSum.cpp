vector<int>arrayFromPS(vector<int>&ps,int n)
{
  int m=ps.size();
  
  vector<int>arr(n);
  arr[0]=((ps[0]+ps[1])-ps[n-1])/2; //(arr[0]+arr[1]+arr[0]+arr[1])-(arr[1]+arr[2]);
  
  for(int i=0;i<n-1;i++)
  {
    arr[i+1]=ps[i]-arr[0];
  }
  return arr;
}
