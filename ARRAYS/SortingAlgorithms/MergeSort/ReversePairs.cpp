#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int> &nums,int start, int mid,int end)
{
    vector<int>temp;
    int i=start,j=mid+1;
    while(i<=mid&&j<=end)
    {
        if(nums[i]<=nums[j])
        {
            temp.push_back(nums[i++]);
        }
        else
        {
            temp.push_back(nums[j++]);
        }
    }

    while(i<=mid)
    {
        temp.push_back(nums[i++]);
    }
    while(j<=end)
    {
        temp.push_back(nums[j++]);
    }
    for(int k=start;k<=end;++k)
    {
        nums[k]=temp[k-start];
    }
}
int mergeSort(vector<int>&nums ,int start, int end)
{
    int count=0;
    if(start>=end)
    return 0;

        int mid=start+(end-start)/2;

        count+=mergeSort(nums,start,mid);
        count+=mergeSort(nums,mid+1,end);
        count+=countPairs(nums,start,mid,end);
        merge(nums,start,mid,end);
        return count;
}
int countPairs(vector<int> &nums,int start, int mid,int end)
{
    int count=0;
        int right=mid+1;
        for(int i=start;i<=mid;i++)
        {  
            while(right<=end && (long long)nums[i] > 2LL * nums[right])
            right++;
            count+=(right-(mid+1));
        }
        return count;
}
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
int main()
{
    vector<int> arr={2,4,1,3,5};
    cout<< mergeSort(arr,0,arr.size()-1);
    return 0;
}