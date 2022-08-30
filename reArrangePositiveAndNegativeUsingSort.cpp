static bool comp(int &a,int &b)
{
  if((a < 0 && b < 0) || (a > 0 && b > 0) || (a > 0 && b < 0))
  {
    return false;
  }
  
  if(a < 0 && b > 0)
  {
    return true;
  }
  
  if((a == 0 && b < 0) || (a > 0 && b == 0))
  {
    return false;
  }
  
  if((a == 0 && b > 0) || (a < 0 && b == 0))
  {
    return true;
  }
}

void rearrange(int arr[],int n)
{
  sort(arr,arr+n,comp);
}
