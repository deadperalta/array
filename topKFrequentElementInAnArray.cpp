//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second == b.second)
        {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
  public:
    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        
        vector<pair<int,int>>store;
        
        for(auto it:freq)
        {
            store.push_back({it.first,it.second});
        }
        
        sort(store.begin(),store.end(),comp);
        
        vector<int>ans;
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(store[i].first);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
