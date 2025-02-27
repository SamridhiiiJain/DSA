// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    // for loop
    string str="apna college"; 
    for(int i=0;i<str.length();i++)
    {
        cout<< str[i] << " " ;
    }
    cout<< endl;
    //for each loop
    for( char ch : str)
    {
        cout << ch <<" ";
    }
    return 0;
}