#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityelement(vector<int> &nums)
{ 
    int n =nums.size();
    sort(nums.begin(),nums.end());
    int freq=1,ans=nums[0],i;
    for(i=1;i<n;i++)
    {
        if(nums[i]==nums[i-1])
        {
            freq++;
        }
        else
        {
            freq=1;
            ans=nums[i];
        }
       if(freq>n/2)
       return ans;
    }
    return ans;
}


int main()
{
    vector<int>arr={1,2,2,2,1,2,1,2};
     int ans=majorityelement(arr);
    cout<<ans;

    return 0;
}

//MOORES VOTING ALGORITHM IS THE MOST OPTIMISED APPROACH
