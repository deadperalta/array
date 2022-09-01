//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int least_average(vector<int>nums, int k)
	{
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        
        int st=1;
        int minSum=sum;
        
        for(int i=k;i<nums.size();i++)
        {
            sum=sum-nums[i-k]+nums[i];
            if(sum < minSum)
            {
                minSum=sum;
                st=i-k+2;
            }
        }
        return st;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.least_average(nums, k);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
