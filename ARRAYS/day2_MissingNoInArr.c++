#include<iostream>
using namespace std;
int main(){
    int i,sum=0,sum1=0;
    int arr[6]={1,2,4,5,6};
    for(i=0;i<6;i++)
    {
        sum+=arr[i];
    }
    int n =6;
    sum1=((n*(n+1))/2);
    int ans= sum1-sum;
    cout<<"missing no :"<<ans;
}