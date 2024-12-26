#include<iostream>
using namespace std;
int main(){
    int pos=-1,k=4,i;
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        if(a[i]==k)
        pos=i;
    }
    cout<<"Element found at location :"<<" "<<pos;
}