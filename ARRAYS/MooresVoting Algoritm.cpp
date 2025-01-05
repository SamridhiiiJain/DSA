#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majorityelement(vector<int> &nums)
{ 
    int n =nums.size();
   int freq=0,ans=-1,i;
    for(i=0;i<n;i++)
    {
        if(freq==0)
        {
            freq=1;
            ans=nums[i];
        }
        if(ans==nums[i])
        freq++;
        else
        freq--;
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(nums[i]==ans)
        count++;
    }
    if(count>n/2)
    {
        return ans;
    }
    
return -1;
}


int main()
{
    vector<int>arr={1,2,2,2,1,2,1,2};
     int ans=majorityelement(arr);
    cout<<ans;

    return 0;
}
