#include<bits/stdc++.h>
using namespace std;


void relativeComplement(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    
    while(i < n && j < m)
    {
        if(a[i] == b[j])
        {
            i++;
            j++;
        }
        else if(a[i] < b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        {
            j++;
        }
    }
    
    while(i < n)
    {
        cout<<a[i]<<" ";
    }
}

int main(){

   int arr1[] = {3, 6, 10, 12, 15};
  int arr2[] = {1, 3, 5, 10, 16};
  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);
  relativeComplement(arr1, arr2, n, m);
}
