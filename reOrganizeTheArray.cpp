//{ Driver Code Starts
#include <iostream>
using namespace std;


int * Rearrange(int *arr,int n);

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int *b = Rearrange(a,n);
	    for(int i=0;i<n;i++)
	        cout << b[i] <<" ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends


int * Rearrange(int *arr,int n){
    int i=0;
    
    while(i < n)
    {
        int correct=arr[i];
        if(arr[i] != -1 && arr[i] != arr[correct])
        {
            swap(arr[i],arr[correct]);
        }
        else
        {
            i++;
        }
    }
    
    return arr;
}
