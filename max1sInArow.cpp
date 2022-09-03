//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    int firstOcc(vector<int>&arr,int m)
    {
        int low=0;
        int high=m-1;
        
        int ans;
        
        while(low <= high)
        {
            int mid=low+((high-low)>>1);
            
            if(arr[mid] == 1)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int max1=0;
            int ans;
            
            for(int i=0;i<N;i++)
            {
                if(Mat[i][M-1] == 0)
                {
                    continue;
                }
                int ones=M-firstOcc(Mat[i],M);
                if(ones > max1)
                {
                    max1=ones;
                    ans=i;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends
