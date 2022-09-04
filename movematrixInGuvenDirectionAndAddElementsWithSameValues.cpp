void operation(vector<vector<int>>&mat,int m,int n,char ch)
{
  if(ch == 'l')
  {
    for(int i=0;i<m;i++)
    {
      vector<int>v,w;
      for(int j=n-1;j>=0;j--)
      {
        if(mat[i][j])
        {
          v.push_back(mat[i][j]);
        }
      }
      
      for(int j=0;j<v.size();j++)
      {
        if(j < v.size()-1 && v[j+1] == v[j])
        {
          w.push_back(2*v[j]);
          j++;
        }
      }
      int j;
      for(j=n-1;j>w.size()-1;j--)
      {
        mat[i][j]=0;
      }
      
      for(auto it:w)
      {
        mat[i][j--]=it;
      }
    }
  }
  else if(ch == 'r')
  {
    for(int i=0;i<m;i++)
    {
      vector<int>v,w;
      for(int j=0;j<n;j++)
      {
        if(mat[i][j])
        {
          v.push_back(mat[i][j]);
        }
      }
      
      for(int j=0;j<v.size();j++)
      {
        if(j < v.size()-1 && v[j+1] == v[j])
        {
          w.push_back(2*v[j]);
          j++;
        }
      }
      int j;
      for(j=0;j<n-w.size();j++)
      {
        mat[i][j]=0;
      }
      
      for(auto it:w)
      {
        mat[i][j++]=it;
      }
    }
  }
  else if(ch == 'd')
  {
    for(int i=0;i<n;i++)
    {
      vector<int>v,w;
      for(int j=m-1;j>=0;j--)
      {
        if(mat[j][i])
        {
          v.push_back(mat[j][i]);
        }
      }
      
      for(int j=0;j<v.size();j++)
      {
        if(j < v.size()-1 && v[j+1] == v[j])
        {
          w.push_back(2*v[j]);
          j++;
        }
      }
      int j;
      for(j=0;j<w.size()-1;j++)
      {
        mat[j][i]=0;
      }
      
      for(auto it:w)
      {
        mat[j++][i]=it;
      }
    }
    else
    {
      for(int i=0;i<n;i++)
      {
        vector<int>v,w;
        for(int j=0;j<m;j++)
        {
          if(mat[j][i])
          {
            v.push_back(mat[j][i]);
          }
        }

        for(int j=0;j<v.size();j++)
        {
          if(j < v.size()-1 && v[j+1] == v[j])
          {
            w.push_back(2*v[j]);
            j++;
          }
        }
        int j;
        for(j=m-1;j>w.size()-1;j--)
        {
          mat[j][i]=0;
        }

        for(auto it:w)
        {
          mat[j--][i]=it;
        }
      }
    }
  }
