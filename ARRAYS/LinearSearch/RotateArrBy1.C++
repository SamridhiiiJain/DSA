#include<iostream>
using namespace std;
int main()
{
    int arr[1000],n,i;
    cout<<"Enter array size"<<endl;
    cin>>n;
    cout<<"Enter Array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int last=arr[n-1];
    for(i=n-2;i>=0;i--)
    arr[i+1]=arr[i];
    arr[0]=last;

    for(i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}