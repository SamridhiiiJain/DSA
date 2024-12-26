#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int ans=INT_MIN;
    int i;
    //highest no in array
    for(i=0;i<6;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    //for second highest element in array
    int sans=INT_MIN;
    for(i=0;i<6;i++)
    {
        if(ans!=arr[i])
        sans=max(sans,arr[i]);
    }
    cout<<"Second highest in the array :"<<sans;
}