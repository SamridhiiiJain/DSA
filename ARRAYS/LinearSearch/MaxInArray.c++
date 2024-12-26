#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i;
    int a[5];
        int ans=INT_MIN;
    cout<<"ENTER ELEMENTS of the ARRAY"<<endl;
    for(i=0;i<5;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>ans)
        {
            ans=a[i];
        }
    }
     cout<<"MAX ELEMENT OF THE ARRAY : "<<ans;
    return 0;
}