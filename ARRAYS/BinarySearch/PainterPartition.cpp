#include <iostream>
#include <vector>
#include<algorithm>
#include <climits>
using namespace std;
bool isPossible(vector<int> arr, int n, int m , int mid)
{
    int painter=1,time=0;
    for(int i=0;i<n;i++)
    {
        if(time+arr[i]<=mid)
        {
            time+=arr[i];
        }
        else{
            painter++;
            time=arr[i];
        }
    }
    return painter<=m;
}
int partition(vector<int> arr, int m)
{
    int n =arr.size();
    sort(arr.begin(),arr.end());
    int start,sum=0,end,mid,ans,Max=INT_MIN;
    start=arr[n-1];
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        Max=max(Max,arr[i]);
    }
    start=Max;
    end=sum;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        } 
    }
    return ans;
}
int main()
{
    vector<int> arr={40,30,10,20};
    int m=2;
    int ans=partition(arr,m);
    cout<<ans;
}