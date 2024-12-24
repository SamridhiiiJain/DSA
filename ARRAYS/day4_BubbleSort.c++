#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n,j,i;
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<"Enter array elements :";
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++)
        {
           if(arr[j]>arr[j+1])
           swap(arr[j],arr[j+1]);
        }
    }
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}