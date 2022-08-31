vector<int>kMax(vector<int>&arr,vector<int>&brr,int k)
{
  int n=arr.size();
  
  sort(arr.begin(),arr.end());
  sort(brr.begin(),brr.end());
  
  priority_queue<pair<int,pair<int,int>>>q;
  
  q.push({arr[n-1]+brr[n-1],{n-1,n-1}});
  
  while(k-- && q.empty())
  {
    auto curr=q.top();
    q.pop();
    
    int sum=curr.first;
    
    ans.push_back(sum);
    
    int x=curr.second.first;
    int y=curr.second.second;
    
    if(arr[x] > arr[y] && y-1 >= 0)
    {
      q.push({arr[x]+arr[y-1],{x,y-1}});
    }
    else if(arr[x] < arr[y] && x-1 >= 0)
    {
      q.puh({arr[x-1]+arr[y],{x-1,y}});
    }
  }
  return ans;
}
