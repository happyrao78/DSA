#include<bits/stdc++.h>
using namespace std;
int func(int n){
    if(n<=1) return n;
    int last = func(n-1);
    int slast= func(n-2);
    return last+slast;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<n<<"th fibonacci number is :"<<func(n)<<endl;
    return 0;
}