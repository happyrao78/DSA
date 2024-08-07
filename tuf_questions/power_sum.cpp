#include<bits/stdc++.h>
using namespace std;
int power_sum(int n){
    if(n < 1){
        return 0;
    }
    return n*n*n + power_sum(n-1);
}
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int ans = power_sum(n);
    cout<<ans;
    return 0;
}