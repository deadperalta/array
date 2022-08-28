void reverseArray(int st,int en,vector<int>&arr)
{
  for(int i=st;i<(en-st)/2;i++)
  {
    swap(arr[i],arr[en-st-i]);
  }
}
void rotateByD(vector<int>&arr,int d)
{
  
  reverseArray(0,arr.size()-1,arr);
  reverseArray(0,arr.size()-d-1,arr);
  reverseArray(arr.size()-d,arr.size()-1,arr);
}
