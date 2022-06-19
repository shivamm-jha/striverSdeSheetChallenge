#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    unordered_set<char> st;
    int i =0 , j=0 , ans =0,  n = s.size();
    while(i<n && j<n){
        if(st.find(s[j])==st.end()){
            st.insert(s[j++]);
            ans= max(ans,j-i);
        }
        else{
            st.erase(s[i++]);
        }
    }
    return ans;
}