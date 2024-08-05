#include<bits/stdc++.h>
using namespace std;
void printNos(int i,int n){
    if(i < 1) return;
    cout<<i<<" ";
    printNos(i-1,n);
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    printNos(n,n);
    return 0;
}