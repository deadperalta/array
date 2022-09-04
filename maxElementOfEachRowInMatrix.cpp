vector<int>maxe(vector<vector<int>>mat,int m,int n)
{
  vector<int>ans;
  
  for(int i=0;i<m;i++)
  {
    int maxi=0;
    for(int j=0;j<n;j++)
    {
      maxi=max(maxi,mat[i][j]);
    }
    ans.push_back(maxi);
  }
  return ans;
}
