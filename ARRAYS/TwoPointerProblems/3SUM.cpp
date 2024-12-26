#include<iostream>
#include<vector>
using namespace std;
 int threeSum(vector<int> &numbers, int target){
        int ans;
        int n=numbers.size();
        for(int i=0;i<n-2;i++)
        {
           ans=target-numbers[i];
           int start=i+1;
           int end=n-1;
           while(start < end)
        {
            if(numbers[start]+numbers[end]==target)
            {
               return 1;
            }
            else if(numbers[start]+numbers[end]<target)                    
            start++;
            else
            end--;
        }
        }
        return 0;
 }
 int main()
 {
    vector<int> arr={1,4,6,8,10,45};
    int x = 24;
    threeSum(arr,x);
    return 0;
 }
       
   