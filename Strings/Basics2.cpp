// Strings in c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str="apna college"; //dynamic in nature and can be redefined at run time
    cout<< str << endl;
    
    str="hello";
    cout<< str << endl;
    
    string str1="apna";
    string str2="college";
    string str3= str1+str2; //concatenation
    cout<< str3 << endl;
    
    cout<< (str1==str2) << endl; //comparison 
    cout<< str1.length()<< endl;
    // char chaArr[]="apna college";
    // chaArr="hello"; // can not be redefined
    
    //input from user
    
    string sam ;
    cout<<"enter a  string"<<endl;
    getline(cin , sam);
    // cin>> sam; // same problem space k baad wala kuch print nhi hoga
    cout<<"output:  "<< sam << endl;
    return 0;
}