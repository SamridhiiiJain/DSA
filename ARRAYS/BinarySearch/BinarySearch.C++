#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
   int start=0;
   int end=n-1;
   int mid;
   while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key){
        return mid;
        }
        else if(arr[mid]<key){
        start=mid+1;}
        else{
        end=mid-1;}
    }
    return -1;
}
int main(){
    int arr[100];
    int n,i,j,key;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"enter the value of key:";
    cin>>key;
    cout<<binarySearch(arr,n,key);
}