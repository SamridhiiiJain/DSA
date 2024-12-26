#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
 bool findPair(vector<int> &arr, int x) {
         sort(arr.begin(),arr.end());
         int start=0,end=1,n=arr.size();
         while(end<n)
         {
             if(arr[end]-arr[start]==x)
              {
                  return true;
              }
             else if(arr[end]-arr[start]<x)
             end++;
             else
             start++;
             if(start==end)
             end++;
         }
        return false;
    }
    int main()
    {
        vector<int> v={2,3,5,10,50,80};
        int target=45;
        findPair(v,target);
        return 0;
    }