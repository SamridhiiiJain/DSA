#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n,i,j;
    cout<<"Enter the no of array elements:";
    cin>>n;
    cout<<"Enter the array elements :";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
       for(j=i;j>0;j--)
       {
           if(arr[j]<arr[j-1])  //increasing order
           //if(arr[j]<arr[j-1]) ->descending order
           swap(arr[j],arr[j-1]);
           else
           break;
       }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}