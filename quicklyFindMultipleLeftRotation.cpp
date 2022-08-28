vector<int>after(vector<int>&arr,int k)
{
  vector<int>ans;
  
  for(int i=k;i<k+arr.size();i++)
  {
    ans.push_back(arr[i%arr.size()]);
  }
  return ans;
}
vector<int>leftRotation(vector<int>arr,vector<int>ks)
{
  vector<vector<int>>ans;
  
  for(int k:ks)
  {
    ans.push_back(after(arr,k));
  }
  return ans;
}
