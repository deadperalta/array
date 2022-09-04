void rotate(vector<vector<int>>&mat,int m,int n,int k)
{
  for(int i=0;i<m;i++)
  {
    for(int j=k;j<k+n;j++)
    {
      cout<<mat[i][j%n]<<" ";
    }
    cout<<endl;
  }
}
