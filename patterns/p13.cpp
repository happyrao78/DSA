#include<iostream>
using namespace std;
void print(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
       
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}