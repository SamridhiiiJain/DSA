//Brute Force Approach
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int i,j;
        for(i=0;i<n;i++)
        {
            int prod=1;
            for(j=0;j<n;j++)
            {
                if(i!=j)
               ans[i]*=nums[j];
            }
        }
        return ans;
    }

    int main()
{
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    productExceptSelf(arr);
    return 0;
}

//optimized Approach
vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int i;
        for(i=1;i<n;i++)
        {
            ans[i]=ans[i-1]*nums[i-1];
        }
        int suffix=1;
         for(i=n-2;i>=0;i--)
        {
            suffix*=nums[i+1];
            ans[i]*=suffix;
        }
        return ans;
    }