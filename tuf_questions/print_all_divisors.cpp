#include<bits/stdc++.h>
using namespace std;
void printAllDivisors(int n){
    vector<int> num;
    for(int i=1;i<=sqrt(n);i++){
        if( n % i ==0){
            num.push_back(i);
            if((n/i) != i){
                num.push_back(n/i);
            }
        }
    }
    sort(num.begin(),num.end());
    for( auto it : num) {cout<<it<<" ";};
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    printAllDivisors(n);
    return 0;
}