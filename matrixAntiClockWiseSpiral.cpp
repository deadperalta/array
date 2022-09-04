vector<int>reverseSpiral(vector<vector<int>>&mat,int m,int n)
{
  int top=0,left=0;
  int bottom=m-1,right=n-1;
  
  vector<int>ans;
  int dir=0;
  
  while(top <= bottom && left <= right)
  {
    if(dir == 0)
    {
      for(int i=top;i<=bottom;i++)
      {
        ans.push_back(mat[left][i]);
      }
      top++;
    }
    else if(dir == 1)
    {
      for(int i=left;i<=right;i++)
      {
        ans.push_back(mat[i][bottom]);
      }
      left++;
    }
    
    else if(dir == 2)
    {
      for(int i=bottom;i>=top;i--)
      {
        ans.push_back(mat[i][right]);
      }
      bottom--;
    }
    
    else
    {
      for(int i=right;i>=left;i++)
      {
        ans.push_back(mat[i][top]);
      }
      right--;
    }
    
    dir=(dir+1)%4;
  }
  return ans;
}
