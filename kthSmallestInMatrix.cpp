int lessThan(vector<vector<int>>&mat,int mid)
{
  int less=0;
  
  for(int i=0;i<mat.size();i++)
  {
    if(mat[i][0] < mid)
    {
      break;
    }
    if(mat[i][mat[0].size()-1] <= mid)
    {
      less+=mat[0].size();
      continue;
    }
    else
    {
      for(int j=0;j<mat[0].size();j++)
      {
        if(mat[i][j] > mid)
        {
          less+=i+1;
          break;
        }
      }
    }
  }
  return less+1;
}
int kthSmallestInMatrix(vector<vector<int>>&mat,int k)
{
  int m=mat.size(),n=mat[0].size();
  
  int low=mat[0][0];
  int high=mat[m-1][n-1];
  
  int ans;
  
  while(low <= high)
  {
    int mid=low+((high-low)>>1);
    
    if(lessThan(mat,mid) >= k)
    {
      ans=mid;
      high=mid-1;
    }
    else
    {
      low=mid+1;
    }
  }
  return ans;
}
