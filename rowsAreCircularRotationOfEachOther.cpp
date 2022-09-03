bool isCircularRotation(vector<int>&ele,vector<int>&row)
{
  int i=0,j=0;
  
  while(i < ele.size())
  {
    if(ele[i] == row[j])
    {
      j++;
    }
    else if(ele[i] != row[j])
    {
      j=0;
    }
    if(j == row.size())
    {
      return true;
    }
  }
  return false;
}
bool circularRotation(vector<vector<int>>&mat)
{
  int m=mat.size();
  int n=mat[0].size();
  
  vector<int>ele;
  
  for(int i=0;i<2*n;i++)
  {
    ele.push_back(mat[0][i%n]);
  }
  
  for(int i=1;i<m;i++)
  {
    if(isCircularRotation(ele,mat[i]) == false)
    {
      return false;
    }
  }
  return true;
}
  
