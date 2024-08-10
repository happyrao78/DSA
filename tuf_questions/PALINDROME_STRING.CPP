#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(int i, string &s){
    if(i > s.size()/2) return true;
    if(s[i]  != s[s.size()-i-1]){
        return false;
    }
    return check_palindrome(i+1,s);
}
int main(){
    string h="naman";
    cout<<check_palindrome(0,h);
    return 0;
}