int kthSmallest(vector<int>&nums,int k)
{
  set<int>st;
  
  for(int i:nums)
  {
    st.insert(i);
  }
  auto it=st.begin();
  
  for(int i=0;i<k-1;i++)
  {
    it++;
  }
  return *it;
}
