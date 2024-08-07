#include<bits/stdc++.h>
using namespace std;
long long int fac(long long int n){
    if(n==0) return 1;
    return n* fac(n-1);
}
int main(){
   long long int n;
    cout<<"enter the num:";
    cin>>n;
    long long int ans= fac(n);
    cout<<ans;
    return 0;
}