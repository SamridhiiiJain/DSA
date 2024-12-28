#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxProduct(vector<int>& nums) {
        int prefix=1,suffix=1;
        int maxprod=INT_MIN;
        int n=nums.size();
        int i;
        
        for(i=0;i<n;i++)
        {
            if(prefix==0)
            prefix=1;
            if(suffix==0)
            suffix=1;

            prefix*=nums[i];
            suffix*=nums[n-i-1];
            maxprod=max(maxprod,max(prefix,suffix));
        }
        return maxprod;
    }

    int main()
{
    vector<int>arr={-2,0,-1};
    int ans=maxProduct(arr);
    cout<<ans;
    return 0;
}