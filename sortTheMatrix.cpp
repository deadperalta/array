void sort(vector<vector<int>>&mat)
{
  vector<int>store;
  
  for(int i=0;i<mat.size();i++)
  {
    for(int j=0;j<mat[0].size();j++)
    {
      store.push_back(mat[i][j]);
    }
  }
  
  sort(store.begin(),store.end());
  
  int k=0;
  for(int i=0;i<mat.size();i++)
  {
    for(int j=0;j<mat[0].size();j++)
    {
      mat[i][j]=store[k++];
    }
  }
  
}
