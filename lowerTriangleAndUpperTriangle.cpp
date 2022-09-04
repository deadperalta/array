void lowerTriangle(vector<vector<int>>mat,int m,int n)
{
   for(int i=0;i<m;i++)
   {
     for(int j=0;j<n;j++)
     {
       if(i >= j)
       {
          cout<<mat[i][j]<<" ";
       }
     }
     cout<<endl;
   }
}

void upperTriangle(vector<vector<int>>mat,int m,int n)
{
   for(int i=0;i<m;i++)
   {
     for(int j=0;j<n;j++)
     {
       if(i <= j)
       {
          cout<<mat[i][j]<<" ";
       }
     }
     cout<<endl;
   }
}
