#include<bits/stdc++.h>
//finds all the factorial less than n
using namespace std;
int factorial(int n){
    if(n ==0) return 1;

    return n* factorial(n-1);
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    vector<int> arr(0);
    for(auto i=1;i<=n;i++){
        if(factorial(i) > n){break;}
        arr.push_back(factorial(i));
    }
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}