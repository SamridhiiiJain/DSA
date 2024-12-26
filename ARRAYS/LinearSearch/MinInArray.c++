#include<iostream>
#include<climits>
using namespace std;
 int main()
 {
    int i;
    int a[5];
     int ans=INT_MAX;
    cout<<"ENTER ARRAY ELEMENTS"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<5;i++)
    {
       
        if(a[i]<ans)
        {
            ans=a[i];
        }
       
    }
       cout<<"MINIMUN ELEMENT : "<<ans<<endl;
    return 0;
 }