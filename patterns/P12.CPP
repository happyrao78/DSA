#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int space=1;space<2*(n-i);space++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
            
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