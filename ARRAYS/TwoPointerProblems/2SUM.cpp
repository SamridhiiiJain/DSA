#include<iostream>
#include<vector>
using namespace std;
 vector<int> twoSum(vector<int> &numbers, int target){
 vector<int> ans;
        int start=0;
        int end=numbers.size() - 1;
        while(start < end)
        {
            if(numbers[start]+numbers[end]==target)
            {
               ans.push_back(start+1);
               ans.push_back(end+1);
               return ans;
            }
            else if(numbers[start]+numbers[end]<target)                    
            start++;
            else
            end--;
        }
        return ans;
 }
 int main()
 {
    vector<int> arr={2,7,11,15,27};
    int x = 22;
    twoSum(arr,x);
    return 0;
 }
       
   