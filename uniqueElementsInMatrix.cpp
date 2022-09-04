vector<int>unique(vector<vector<int>>&mat,int m,int n)
{
  unordered_map<int,int>freq;
  
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      freq[mat[i][j]]++;
    }
  }
  
  vector<int>ans;
  
  for(auto it:freq)
  {
    ans.push_back(it.second);
  }
  
  return ans;
}
