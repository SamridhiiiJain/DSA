// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
  int n=5;
  int arr[5]={1,2,3,4,5};
  int start,end,i;
  for(start=0;start<n;start++)
  {
      for(end=start;end<n;end++)
      {
          for(i=start;i<end;i++)
          {
              cout<<arr[i];
          }
          cout<<" ";
      }
      cout<<endl;
  }
}