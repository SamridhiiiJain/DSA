#include<iostream>
#include<vector>
using namespace std;

 vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int start,end,mid=0,first=-1,last=-1;
        start=0;
        end=n-1;
        //first occurance
        while(start<=end)
        {
            mid=(start+end)/2;
            if(target==nums[mid])
            {
                first=mid;
                end=mid-1;
            }
            else if(target>nums[mid])
            start=mid+1;
            else
            end=mid-1;
        }
    //last occurance
    start=0,end=n-1;
        while(start<=end)
        {
            mid=(start+(end-start))/2;
            if(target==nums[mid])
            {
                last=mid;
                start=mid+1;
            }
            else if(target>nums[mid])
            start=mid+1;
            else
            end=mid-1;
        }
        return {first, last};
    }

    int main()
    {
        vector<int>arr={5,7,7,8,8,10};
        int find=8;
        vector<int>ans=searchRange(arr,find);
        return 0;
    }