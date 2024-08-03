#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the numbers:"<<endl;
    cin>>n1>>n2;
    int gcd=1;
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            gcd =i;
            break;//breaks the inner loop not the outer loop
        }
        
    }
    cout<<"gcd is : "<<gcd;

    return 0;
}