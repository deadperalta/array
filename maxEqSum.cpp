int maxEqSum(vector<int>&arr,int n)
{
  vector<int>pre;
	pre.push_back(arr[0]);
	
	for(int i=1;i<n;i++)
	{
		pre.push_back(arr[i]+pre[i-1]);
	}
	
	int ms=0;
	
	for(int i=1;i<n-1;i++)
	{
		int ls=pre[i];
		int rs=pre[n-1]-pre[i];
		
		if(ls == rs)
		{
			ans=max(ans,ls);
		}
	}
	
	return ans;
}
