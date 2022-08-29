int index(vector<int>&arr,vector<vector<int>>queries,int ind)
{
  for(auto q:queries)
  {
    int left=q[0];
    int right=q[1];
    
    if(left <= ind && right >= ind)
    {
      if(left == ind)
      {
        ind = right;
      }
      else
      {
        ind--;
      }
    }
  }
  return arr[ind];
}
