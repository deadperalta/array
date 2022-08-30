//we start from last part because we will swap this element with elements before it, so that no element can go back to their home;
void randomize(int arr[],int n)
{
  for(int i=n-1;i>0;i--)
  {
    int j=rand()%(i+1);
    swap(arr[j],arr[i]);
  }
}
