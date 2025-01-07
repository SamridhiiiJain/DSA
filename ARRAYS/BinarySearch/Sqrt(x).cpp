#include<iostream>
#include<vector>
using namespace std;

int mySqrt(int x) {
        if (x == 0 || x == 1) 
        return x;
        int mid,start=0,end=x,ans=-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(x/mid == mid)
            {
                return mid;
            }
            else if(x / mid > mid)
            {
                ans=mid;
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return ans;
    }

    int main()
    {
        int target=8;
        int ans=mySqrt(target);
        cout<<ans;
        return 0;
    }