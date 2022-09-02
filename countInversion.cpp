//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    long long int merge(long long int arr[],long long int l,long long int mid,long long int r)
    {
        vector<long long int>temp;
        long long int count=0;
        
        long long int i=l,j=mid+1;
        
        while(i <= mid && j <= r)
        {
            if(arr[i] <= arr[j])
            {
                temp.push_back(arr[j]);
                j++;
            }
            else
            {
                count+=(r-j+1);
                temp.push_back(arr[i]);
                i++;
            }
        }
        while(i <= mid)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while(j <= r)
        {
            temp.push_back(arr[j]);
            j++;
        }
        
        for(int i=0;i<temp.size();i++)
        {
            arr[i+l]=temp[i];
        }
        return count;
    }
    long long int mergeSort(long long int arr[],long long int l,long long int r)
    {
        long long int count=0;
        
        if(l < r)
        {
            long long int mid=l+((r-l)>>1);
            
            count+=mergeSort(arr,l,mid);
            count+=mergeSort(arr,mid+1,r);
            
            count+=merge(arr,l,mid,r);
        }
        return count;
    }
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        return mergeSort(arr,0,N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends
