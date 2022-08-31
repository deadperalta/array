#include<bits/stdc++.h>
using namespace std;

void kSmallest(int arr[],int n,int k)
{
  for(int i=k;i<n;i++)
  {
    int maxVar=arr[k-1];
    int pos=k-1;
    
    int j=k-2;
    
    while(j >= 0) //find the max element and it's position
    {
      if(arr[j] > maxVar)
      {
        maxVar=arr[j];
        pos=j;0
      }
      j--;
    }
    
    if(arr[i] < maxVar) //if arr[i] is less than max element
    {
        int j=pos;
        while(j < k-1) // we shift all elements to left so that we have a new place for our smaller element at k-1 so that they are still in order;
        {
            arr[j]=arr[j+1];
            j++;
        }
        arr[k-1]=arr[i];//placing smaller element at k-1
    }
  }
  
  for(int i=0;i<k;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main(){

    int n=7;
    int arr[n]={7,4,1,4,5,3,2};
    int k=5;
    
    kSmallest(arr,n,k);
}
