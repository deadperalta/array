class Solution {
    int partition(vector<int>&nums,int low,int high)
    {
        int i=low;
        int pivot=nums[high];
        
        for(int j=low;j<high;j++)
        {
            if(nums[j] < pivot)
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }
        swap(nums[i],nums[high]);
        return i;
    }
    int kthLargest(vector<int>&nums,int low,int high,int k)
    {
        if(k > 0 && k <= high-low+1)
        {
            int pivot=partition(nums,low,high);
            
            if(high-pivot == k-1)
            {
                return nums[pivot];
            }
            
            if(high-pivot < k-1)
            {
                return kthLargest(nums,low,pivot-1,k-(high-pivot+1));
            }
            else
            {
                return kthLargest(nums,pivot+1,high,k);
            }
        }
        return INT_MAX;
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        return kthLargest(nums,0,nums.size()-1,k);
    }
};
