// bruteForceApproach
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int MaxWater(vector<int> &height)
{
    int i,j,leftmax,width=0,h=0,area=0;
    int maxwater=0;
    int n=height.size();
    for(i=0;i<n;i++)
    {
        leftmax=height[i];
        for(j=i+1;j<n;j++)
        {
            width=j-i;
            h=min(height[i],height[j]);
            area=width*h;
            maxwater=max(maxwater,area);
        }
    }
    return maxwater;
}
int main() {
    vector<int> arr={3,1,2,5,5};
    int max=MaxWater(arr);
    cout<<max;
    
    return 0;
}

//OPTIMIZED APPROACH WITH TWO POINTERS

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

 int maxArea(vector<int>& height) {
        int maxwater=0;
        int start=0;
        int end=height.size()-1;
        while(start<end)
        {
            int width=end-start;
            int h=min(height[start],height[end]);
            int currentWater =width*h;
            maxwater=max(maxwater,currentWater);
            height[start]<height[end]?start++:end--;
        }
        return maxwater;
    }
int main() {
    vector<int> arr={3,1,2,5,5};
    int max=MaxWater(arr);
    cout<<max;
    
    return 0;
}
