#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool rotateString(string s, string goal) {
    string whole =s+s;
    if(s.length()!=goal.length())
    return false;
    if(whole.find(goal)==-1)
    return false;
    else 
    return true;
}