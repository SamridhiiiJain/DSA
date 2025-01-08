int findMin(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1,mid=0,ans=nums[0];
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]>=nums[0])
            start=mid+1;
            else
            {
                ans=nums[mid];
                end=mid-1;
            }    
        }
        return ans;
    }