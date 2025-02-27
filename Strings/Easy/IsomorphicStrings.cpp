#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) 
        return false;

    int sMap[256] = {0};  // Stores mapping of s[i] to t[i]
    int tMap[256] = {0};  // Stores mapping of t[i] to s[i]

    for (int i = 0; i < s.length(); i++) {
        if (sMap[s[i]] != tMap[t[i]]) 
            return false;

        sMap[s[i]] = i + 1;  // Store index + 1 to avoid conflict with default 0
        tMap[t[i]] = i + 1;
    }
    return true;
}