// character array in c++
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[]={'a','b','c','\0'};
    cout<< str<<endl;
    char str1[]={'a','b','c'};
    cout<< str1<<endl;
    char str3[]="Hello world"; //String literals->Constants does not change values
    cout<< strlen(str3)<<endl; // constant pointers
    cout<< str3[4]<<endl;
    int str2[]={'1','2','3'};
    cout<< str2<<endl;
    
    //input from user
    // char sam[100];
    // cout<<"Enter Character Array"<<endl;
    // cin>>sam;
    // cout<<"output: " << sam << endl;
    
    // char sam[10];
    // cout<<"Enter Character Array"<<endl;
    // cin.getline(sam,10,'$');
    // cout<<"output: " << sam << endl;
    
    char sam[15];
    cout<<"Enter Character Array"<<endl;
    cin.getline(sam,15);
     for(char ch : sam)
     {
         cout<< ch <<" ";
     }
    cout<< endl;
    return 0;
}