void rotate(vector<vector<int>>&mat,int m,int n)
{
  for(int i=0;i<m/2;i++)
  {
    for(int j=0;j<n;j++)
    {
      swap(mat[i][j],mat[m-i-1][j]);
    }
  }
  
  for(int i=0;i<m;i++)
  {
    reverse(mat[i].begin(),mat[i].end());
  }
  
}
