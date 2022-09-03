// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>v;
        int t=0,b=r-1;
        int l=0,ri=c-1;
        int dir=0;
        while(t<=b && l<=ri)
        {
            if(dir==0)
            {
                for(int i=l;i<=ri;i++)
                {
                    v.push_back(matrix[t][i]);
                }
                t++;
            }
            if(dir==1)
            {
                for(int i=t;i<=b;i++)
                {
                    v.push_back(matrix[i][ri]);
                }
                ri--;
            }
            if(dir==2)
            {
                for(int i=ri;i>=l;i--)
                {
                    v.push_back(matrix[b][i]);
                }
                b--;
            }
            if(dir==3)
            {
                for(int i=b;i>=t;i--)
                {
                    v.push_back(matrix[i][l]);
                }
                l++;
            }
            dir=(dir+1)%4;
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
