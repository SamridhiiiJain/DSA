#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool isAnagram(string s, string t) {
    if(s.length()!=t.length())
    return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==t[i])
        count++;
        else
        count--;
    }
    if(count==s.length())
    return true;
    else 
    return false;
}