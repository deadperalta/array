//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>leftMax;
    priority_queue<int,vector<int>,greater<int>>rightMin;
    
    void insertHeap(int &x)
    {
        leftMax.push(x);
        rightMin.push(leftMax.top());
        leftMax.pop();
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(leftMax.size() < rightMin.size())
        {
            leftMax.push(rightMin.top());
            rightMin.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if((leftMax.size()+rightMin.size()) % 2 == 0)
        {
            return (leftMax.top()+rightMin.top())/2.0;
        }
        else
        {
            return leftMax.top();
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends
