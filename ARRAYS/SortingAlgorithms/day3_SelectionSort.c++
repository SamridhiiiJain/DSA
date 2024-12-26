#include<iostream>
using namespace std;
int main(){
    int arr[7]={7,6,5,4,3,2,1};
    int i,j,index;
    for(i=0;i<6;i++)
    {
        index=i;
        for(j=i+1;j<7;j++)
        {
            if(arr[j]<arr[index])
             index=j;
        }
          swap(arr[i],arr[index]); 
    }
     for(i=0;i<7;i++)
    cout<<arr[i]<<" ";
}