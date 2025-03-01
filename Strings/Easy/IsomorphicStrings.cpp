#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

bool isIsomorphic(string s1, string s2) {
    if (s1.length() != s2.length()) 
        return false;

        unordered_map<char, int> m1, m2;

        for (int i = 0; i < s1.length(); i++) {
          
            // If character not seen before, store its 
            // first occurrence index
            if (m1.find(s1[i]) == m1.end()) {
                m1[s1[i]] = i;
            }
            if (m2.find(s2[i]) == m2.end()) {
                m2[s2[i]] = i;
            }
    
            // Check if the first occurrence indices match
            if (m1[s1[i]] != m2[s2[i]]) {
                return false;
            }
        }
        return true;
    }