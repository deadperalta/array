int partition(int arr[],int low,int high)
{
  int pivot=arr[high];
  
  int i=0;
  
  for(int j=low;j<=high;j++)
  {
    if(arr[j] <= pivot)
    {
      swap(arr[j],arr[i]);
      i++;
    }
  }
  swap(arr[high],arr[i]);
  return i;
}
int quickSort(int arr[],int low,int high,int k)
{
  if(k > 0 && k <= high-low+1)
  {
    int pivot=partition(arr,low,high);
    
    if(pivot-low == k-1)
    {
      return arr[pivot];
    }
    
    if(pivot-low > k-1)
    {
      return quickSort(arr,low,pivot-1,k);
    }
    else
    {
      return quickSort(arr,pivot+1,high,k-pivot+low-1); //because we our element is not before pivot, so now we need to find k-(pivot-low+1) element after pivot;
    }
  }
  return INT_MAX;
}
int kthLargest(int arr[],int n,int k)
{
  return quickSort(arr,0,n-1,int k);
}
