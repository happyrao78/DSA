#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"enter the number to check: "<<endl;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
        
        if((n/i) !=i){
            count++;
        }
        }
    }
    if(count==2){
        cout<<"number is prime"<<endl;
    }
    else if(count==1){
        cout<<"co prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}