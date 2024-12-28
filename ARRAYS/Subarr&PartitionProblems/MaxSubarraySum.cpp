// BruteForceSum
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int start,end,currentsum=0,maxsum=0;
    for(start=0;start<nums.size();start++)
    {
        for(end=start;end<nums.size();end++)
        {
            currentsum+=nums[end];
            maxsum=max(maxsum,currentsum);
        }
    }
    return maxsum;
    }

int main()
{
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    int ans=maxSubArray(arr);
    cout<<ans;
    return 0;
}


//Otimized approach using KADANE'S algorithm
int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int currentsum=0, maxsum=INT_MIN,i;
        for(i=0;i<n;i++)
        {
            currentsum+=nums[i];
            maxsum=max(maxsum,currentsum);
            if(currentsum<0)
            {
                currentsum=0;
            }
        }
        return maxsum;
    }