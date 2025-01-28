#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int> &arr, int m, int n, int maxAllowedPages)
{
   int student=1, pages=0;
   for(int i;i<n;i++)
   {
    if(arr[i]>maxAllowedPages)
    {
        return false;
    }
       if(pages + arr[i]<=maxAllowedPages)
       {
       pages+=arr[i];
       }
       else{
       student++;
       pages=arr[i];
       }
   }
   return  student > m ? false : true ;
}
int bookAlloc(vector<int> &arr, int m)
{
    int n = arr.size();
    if(m>n)
    {
        return -1;
    }
    int start,end,ans=-1,mid,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    start=0;
    end=sum;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(isPossible(arr,m,n,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr={2,1,3,4};
    int m =2;
    int ans=bookAlloc(arr,m);
    cout<<ans<<endl;
    return 0;
}