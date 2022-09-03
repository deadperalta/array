int maxPathSum(vector<vector<int>>&mat,int m,int n)
{
  for(int i=1;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(j == 0)
      {
        mat[i][j]+=max(mat[i-1][j],mat[i-1][j+1]);
      }
			else if(j == n-1)
			{
				mat[i][j]+=max(mat[i-1][j],mat[i-1][j-1]);
			}
			else
			{
				mat[i][j]=max(mat[i-1][j],max(mat[i-1][j-1],mat[i-1][j+1]));
			}
		}
	}
	
	int ans=0;
	
	for(int i=0;i<n;i++)
	{
		ans=max(ans,mat[m-1][i]);
	}
	return ans;
}
