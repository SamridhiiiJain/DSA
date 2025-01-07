#include<iostream>
#include<vector>
using namespace std;
 int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1,index=n,mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                index=mid;
                break;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                index=mid;
                end=mid-1;
            }        
        }
        return index;
    }


    int main()
    {
        vector<int>arr={1,3,5,6};
        int target=2;
        int ans=searchInsert(arr,target);
        return 0;
    }