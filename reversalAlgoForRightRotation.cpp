void reversal(vector<int>&arr,int i,int j)
{
  while(i < j)
  {
    swap(arr[i],arr[j]);
    i++;
    j--;
  }
}
vector<int>reversalAlgo(vector<int>&arr,int d)
{
  reversal(arr,0,arr.size()-1);
  reversal(arr,0,d-1);
  reversal(arr,d,arr.size()-1);
}
