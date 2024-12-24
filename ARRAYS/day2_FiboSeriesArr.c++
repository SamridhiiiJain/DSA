#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n,i ;
    cout<<"Enter the postion of which you want to display the fibo term"<<endl;
    cin>>n;
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n;i++)
    arr[i]=arr[i-1]+arr[i-2];
    cout<<arr[n-1]<<" ";   
}