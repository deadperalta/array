//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    bool found(int k,int low,vector<int>&nums)
    {
        int high=nums.size()-1;
        
        while(low <= high)
        {
            int mid=low+((high-low)>>1);
            
            if(nums[mid] == k)
            {
                return true;
            }
            
            if(nums[mid] < k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return false;
    }
	public:
	int TotalPairs(vector<int>nums, int k){
	    sort(nums.begin(),nums.end());
	    
	    set<pair<int,int>>st;
	    
	    for(int i=0;i<nums.size();i++)
	    {
	        if(found(nums[i]+k,i+1,nums))
	        {
	            st.insert({nums[i],nums[i]+k});
	        }
	    }
	    
	    return st.size();
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
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
