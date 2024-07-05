#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(int space=0;space<(n-i);space++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
}
int main(){
    int x;
    cin>>x;
    print(x);
    return 0;
}