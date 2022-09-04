#include<bits/stdc++.h>
using namespace std;


void swapDiag(vector<vector<int>>&mat,int m,int n)
{
  for(int i=0;i<m;i++)
  {
    swap(mat[i][i],mat[i][n-i-1]);
  }
}

int main(){

    vector<vector<int>>mat = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    
    // Function call
    swapDiag(mat,mat.size(),mat[0].size());
    
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[0].size();j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
