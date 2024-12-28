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
