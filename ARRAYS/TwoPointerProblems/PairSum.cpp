//Brute Force Approach

#include <iostream>
#include<vector>
using namespace std;
vector<int> PairSum(vector<int>&arr ,int target)
{
   vector<int> ans;
   int i,j;
   for(i=0;i<arr.size();i++)
   {
       for(j=i+1;j<arr.size();j++)
       {
           if(arr[i]+arr[j]==target)
           {
               ans.push_back(arr[i]);
               ans.push_back(arr[j]);
               return ans;
           }
       }
   }
   return ans;
}
int main() {
   vector<int> arr={2,7,11,15};
   int target=13;
   vector<int>ans=PairSum(arr,target);
   cout<<ans[0]<<" "<<ans[1]<<endl;
   return 0;
}

//optimised approach using two pointers
vector<int> PairSum(vector<int>&arr ,int target)
{
   vector<int> ans;
   int i;
   int start=0,end=arr.size()-1;
   for(i=0;i<end;i++)
   {
       if(arr[start]+arr[end]==target)
       {
           ans.push_back(arr[start]);
           ans.push_back(arr[end]);
           return ans;
       }
       else if(arr[start]+arr[end]>target)
       end--;
       else
       start++;
   }
   return ans;
}