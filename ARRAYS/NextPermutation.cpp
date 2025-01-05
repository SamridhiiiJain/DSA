#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1,i;
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1]){
                index=i;
                break;    
            }    
        }
        if(index==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(i=n-1;i>index;i--)
        {
            if(nums[i]>nums[index])
            {
            swap(nums[i],nums[index]);
            break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }

int main()
{
    vector<int>arr={1,2,2,2,1,2,1,2};
     nextPermutation(arr);
     return 0;
}