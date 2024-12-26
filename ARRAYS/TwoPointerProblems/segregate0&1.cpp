#include<iostream>
#include<vector>
using namespace std;

int Segregate0and1(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        while(start<end)
        {
            if(arr[start]==0)
            {
               start++;
            }
            else 
            {
                if(arr[end]==0){
                    swap(arr[start],arr[end]);
                    start++;
                    end--;
                }                    
            else
            end--;
          }
        }
}


 int main()
 {
    vector<int> arr={1,0,1,0,0,1,1,0,0};
    Segregate0and1(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
 }
   