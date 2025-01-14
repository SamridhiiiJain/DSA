int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int start=0,end=n-1,ans=arr.size(),mid;
        while(start<=end) 
        {
            mid=start+(end-start)/2;
            if(arr[mid]-mid-1>=k)
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans+k;
    }