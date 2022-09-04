vector<vector<int>>subArray(vector<int>&arr)
{
  int n=arr.size();
  vector<vector<int>>ans;
  
  for(int i=0;i<n;i++)
  {
    vector<int>temp;
    for(int j=i;j<n;j++)
    {
      temp.push_back(arr[j]);
      ans.push_back(temp);
    }
  }
  return ans;
}

void findSub(int i,int n,vector<int>&arr,vector<int>&a,vector<vector<int>>&ans)
{
  if(i == n)
  {
    ans.push_back(a);
    return;
  }
  
  a.push_back(arr[i]);
  findSub(i+1,n,arr,a,ans);
  a.pop_back();
  
  findSub(i+1,n,arr,a,ans);
}
