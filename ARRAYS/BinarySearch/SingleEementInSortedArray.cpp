// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
       int n= nums.size();
       if(n==1)
       {
           return nums[0];
       }
       int start=0,end=n-1,mid=0;
       while(start<=end)
       {
           mid=start+(end-start)/2;
           
           if(mid==0&&nums[mid]!=nums[mid+1])
           return nums[mid];
           if(mid==n-1 && nums[mid]!=nums[mid-1])
           return nums[mid];
            if(nums[mid-1]!=nums[mid]&& nums[mid]!=nums[mid+1])
           {
               return nums[mid];
           }
           if(mid%2==0)
           {
           if(nums[mid-1]==nums[mid])
               end=mid-1;
           else
               start=mid+1;
           }
           else
           {
               if(nums[mid-1]==nums[mid])
               start=mid+1;
           else
                end=mid-1;
           }
       }
       return -1;
    }
    
int main() {
    vector<int> arr={1,1,2,3,3,4,4,8,8};
    cout << singleNonDuplicate(arr);
    

    return 0;
}