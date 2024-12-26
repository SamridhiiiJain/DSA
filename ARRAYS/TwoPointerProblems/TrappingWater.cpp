#include<iostream>
#include<vector>
using namespace std;
 int trappingWater(vector<int> &arr) {
        int n=arr.size();
        int leftmax=0,rightmax=0,i;
        int max=arr[0],index=0;
        int water=0;
        for(i=1;i<n;i++)
        {
            if(arr[i]>max){
            max=arr[i];
            index=i;
        }
        }
        for(i=0;i<index;i++)
        {
            if(leftmax>arr[i])
            water+=leftmax-arr[i];
            else
            leftmax=arr[i];
        }
        for(i=n-1;i>=index;i--)
        {
            if(rightmax>arr[i])
            water+=rightmax-arr[i];
            else
            rightmax=arr[i];
        }
        return water;
    }

 int main()
 {
    vector<int> arr={3,0,0,2,0,4};
    trappingWater(arr);
    return 0;
 }

 //output 10