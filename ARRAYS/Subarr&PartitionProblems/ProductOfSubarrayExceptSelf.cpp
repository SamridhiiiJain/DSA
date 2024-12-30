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

//optimized Approach with space O(n)

#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4};
    int prefix[4],i;
    prefix[0]=arr[0];
    for(i=1;i<4;i++)
    {
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    for(i=0;i<4;i++)
    cout<<prefix[i]<<" ";
    cout<<endl;
    int suffix[4];
    suffix[3]=1;
    for(i=2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]*arr[i+1];
    }
    for(i=0;i<4;i++)
    cout<<suffix[i]<<" ";
    cout<<endl;
    int ans[4];
    for(i=0;i<4;i++)
    {
        ans[i]=prefix[i]*suffix[i];
    }
    for(i=0;i<4;i++)
    cout<<ans[i]<<" ";

    return 0;
}

//optimized Approach with space O(1)
vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int i;
        //prefix is directlt stored in the ans vector
        for(i=1;i<n;i++)
        {
            ans[i]=ans[i-1]*nums[i-1];
        }
        //calculating suffix and them multiplying it in the array
        int suffix=1;
         for(i=n-2;i>=0;i--)
        {
            suffix*=nums[i+1]; 
            ans[i]*=suffix;
        }
        return ans;
    }